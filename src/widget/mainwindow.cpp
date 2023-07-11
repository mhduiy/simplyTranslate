#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QNetworkReply>
#include <QNetworkRequest>
#include <qalgorithms.h>
#include <QMessageBox>
#include <QClipboard>
#include <QKeyEvent>
#include <QFile>
#include <QGraphicsBlurEffect>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    setWindowTitle("simply翻译");

    translatetool = new TranslateTool(this);

    setWindowOpacity(0.9);

    setWindowFlags(this->windowFlags() | Qt::WindowStaysOnTopHint);    //设置窗口置顶
    m_label = new QLabel(this);
    ui->statusBar->addWidget(m_label);

    //链接显示消息
    connect(translatetool,&TranslateTool::disMsgAppend,this,[=](QString msg){
        m_label->setText(msg);
    });

    //链接显示翻译结果
    connect(translatetool,&TranslateTool::translateOK,this,[=](QString res){
        ui->ed_tranTo->setText(res);
        ui->groupBox_2->setTitle("翻译结果");
    });

    TranStyle = new QVector<QString>    //显示翻译类型
    {
        "中文->英文",
        "英文->中文"
    };

    ui->btn_FormAndTo->setText(TranStyle->value(0));

    TranStylecode = new QVector<QPair<QString,QString>>
    {
        QPair<QString,QString>{"zh","en"},
        QPair<QString,QString>{"en","zh"}
    };
//    foreach(auto it,*TranStyle)
//    {
//        ui->cb_FormAndTo->addItem(it);
//    }

    qDebug() << QSslSocket::supportsSsl()
             << QSslSocket::sslLibraryBuildVersionString()
             << QSslSocket::sslLibraryVersionString();
}

MainWindow::~MainWindow()
{
    delete TranStyle;
    delete TranStylecode;
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)//绑定按键
{
    if(event->modifiers() == Qt::ControlModifier && event->key() == Qt::Key_Return)
    {
        m_label->setText("翻译");
        this->on_btn_tran_clicked();
    }
}

void MainWindow::on_btn_paste_clicked() //粘贴
{
    QClipboard *clipboard = QGuiApplication::clipboard();
    ui->ed_tranFrom->clear();
    ui->ed_tranFrom->setText(clipboard->text());
}

void MainWindow::on_btn_tran_clicked()  //翻译
{
    //获取翻译内容
    QString src = ui->ed_tranFrom->toPlainText();
    int curIndex = isZHToeEN ? 0 : 1;
    if(src.isEmpty())
    {
        m_label->setText("还没有输入需要翻译的内容");
        return;
    }
    if(!(TranStylecode->size() > curIndex))
    {
        QMessageBox::warning(this,"错误","curIndex error");
    }
    ui->groupBox_2->setTitle("翻译中...");
    translatetool->TranslateFromBaidu(src,TranStylecode->value(curIndex).first,TranStylecode->value(curIndex).second);
}

void MainWindow::on_btn_clear_clicked() //清除
{
    ui->ed_tranTo->clear();
    ui->ed_tranFrom->clear();
    m_label->clear();
}

void MainWindow::on_btn_copy_clicked()  //复制
{
    QClipboard *clipboard = QGuiApplication::clipboard();
    clipboard->setText(ui->ed_tranTo->toPlainText());
    m_label->setText("复制成功");
}


void MainWindow::on_btn_FormAndTo_clicked()
{
    if(ui->btn_FormAndTo->text() == TranStyle->value(0)) {
        ui->btn_FormAndTo->setText(TranStyle->value(1));
        isZHToeEN = false;
    }
    else {
        ui->btn_FormAndTo->setText(TranStyle->value(0));
        isZHToeEN = true;
    }
}
