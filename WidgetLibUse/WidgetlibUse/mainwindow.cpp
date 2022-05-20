#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    //m_oW = new WidgetLib(ui->tab_2);
    m_oW = new WidgetLib();//给WidgetLib对象分配内存,
//    m_oW->setParent(ui->tabWidget->widget(1));//指定lib父对象，即让这个对象显示在哪一个界面，这里指定StackedWidget的第二页,指定以后会发生错误，就不指定了
    ui->setupUi(this);
    //m_oW->setParent(ui->tabWidget->widget(1));//一定要放在ui->setupUi(this)语句的后面！否则会crash
   m_oW = new WidgetLib(ui->groupBox);
   ui->tabWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
    if(NULL!=m_oW)
    {
        delete m_oW;
        m_oW = NULL;
    }
}


    //ui->tabWidget->setCurrentIndex(1);

void MainWindow::on_pushButton_clicked()
{
    ui->tabWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->setText(QString::number(m_oW->getRst(1,3)));
}
