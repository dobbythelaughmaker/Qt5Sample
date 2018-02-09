#include "mainwindow.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();

    /*
    QApplication app(argc, argv);
    QLabel *lavel = new QLabel("<h2><i>Hello</i> <font color=red>Qt!</font></h2>", 0);
    lavel->show();
    return app.exec();
    */
}
