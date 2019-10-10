#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "exec.h"
#include "var.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->exec_button, SIGNAL(clicked()), this, SLOT(clickToBeign()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clickToBeign(){


    QString str = ui->initial_T->toPlainText();
    ui->content->append("初始温度为"+str+"°C");
    double initial_T = str.toDouble();

    str = ui->time_segment->toPlainText();
     ui->content->append("时间间隔为"+str);
    int time_segment = str.toInt();

    str = ui->first_layer_num->toPlainText();
    ui->content->append("第一层分裂成"+str+"个节点");
    int first_layer_num = str.toInt();

    Exec e(time_segment,initial_T,first_layer_num);
    e.getMArray();

    ui->content->append("\nspline result:");
    unsigned int size = e.mArray.size();
    for (unsigned int i = 0;i < size;i++)
    {
        ui->content->append("m"+ QString::number(i)+
                            "="+
                            QString::number(e.getM(i)));
    }

    ui->content->append("\npoints are:");
    for (unsigned int i = 0; i < e.point.size(); i++)
    {
        ui->content->append("("+ QString::number(e.getX(i))+","+
                                 QString::number(e.getY(i))+
                            ")");
    }
    ui->content->append("\nthe min_cost of Ah is "+ QString::number(min_cost));





}
