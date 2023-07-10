#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "translatetool.h"
#include <QVector>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow()override;
    void keyPressEvent(QKeyEvent* event)override;

private slots:
    void on_btn_paste_clicked();

    void on_btn_tran_clicked();

    void on_btn_clear_clicked();

    void on_btn_copy_clicked();

    void on_btn_FormAndTo_clicked();

private:
    Ui::MainWindow *ui;

    QVector<QString> *TranStyle;        //显示翻译类型
    QVector<QPair<QString,QString>> *TranStylecode;    //翻译类型

    TranslateTool *translatetool;

    bool isZHToeEN = true;  // 当前是中文到英文的翻译

    QLabel *m_label;
};

#endif // MAINWINDOW_H
