#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // open file select dialog
    QString folder = QFileDialog::getOpenFileName(this, tr("Images (*.png *.xpm *.jpg)"));
    QSize q = ui->graphicsView->size();
    ui->label1->setText( folder );

    // debug
    /*
    QString w, h;
    w.setNum(q.width());
    h.setNum(q.height());
    QString ss = "w=" + w + ", h=" + h;
    ui->label1->setText( ss );
    */

    // draw
    QImage image(folder);
    QGraphicsPixmapItem *image_item = new QGraphicsPixmapItem(QPixmap::fromImage(image).scaled(q.width(),q.height()));
    QGraphicsRectItem *rect_item = new QGraphicsRectItem(50, 50, 100, 100);
    qg_scene.addItem(image_item);
    qg_scene.addItem(rect_item);
    ui->graphicsView->setScene(&qg_scene);
}
