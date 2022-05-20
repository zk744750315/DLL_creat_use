#ifndef WIDGETLIB_H
#define WIDGETLIB_H

#include <QWidget>
#include "WidgetLib_global.h"

namespace Ui {
class WidgetLib;
}

class WIDGETLIB_EXPORT WidgetLib : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetLib(QWidget *parent = nullptr);
    ~WidgetLib();
    int getRst(int a,int b);

private slots:
    void on_pushButton_clicked();

private:
    Ui::WidgetLib *ui;
    int add(int a,int b);
};

#endif // WIDGETLIB_H
