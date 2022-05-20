#include "widgetlib.h"
#include "ui_widgetlib.h"

WidgetLib::WidgetLib(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetLib)
{
    ui->setupUi(this);
}

WidgetLib::~WidgetLib()
{
    delete ui;
}

void WidgetLib::on_pushButton_clicked()
{
    ui->lineEdit->setText("abc");

}
int WidgetLib::add(int a,int b)
{
    return a+b;
}
int WidgetLib::getRst(int a,int b)
{
    return(add(a,b));
}
int sub(int a,int b)
{
    return a-b;
}
