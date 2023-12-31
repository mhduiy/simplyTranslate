#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setWindowIcon(QIcon(":/icon.svg"));

    MainWindow w;

    //加载样式表
    QFile file(":/mainStyle.css");
    file.open(QIODevice::ReadOnly);
    if(file.isOpen()) {
        w.setStyleSheet(file.readAll());
    }

    w.setMinimumSize(580, 400);
    w.show();
    QDesktopWidget *desktop=QApplication::desktop();
    w.move((desktop->width()-w.width())/2, (desktop->height()-w.height())/2);
    return a.exec();
}
