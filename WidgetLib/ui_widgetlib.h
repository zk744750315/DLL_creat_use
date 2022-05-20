/********************************************************************************
** Form generated from reading UI file 'widgetlib.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETLIB_H
#define UI_WIDGETLIB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetLib
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;

    void setupUi(QWidget *WidgetLib)
    {
        if (WidgetLib->objectName().isEmpty())
            WidgetLib->setObjectName(QString::fromUtf8("WidgetLib"));
        WidgetLib->resize(400, 300);
        pushButton = new QPushButton(WidgetLib);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 90, 93, 28));
        lineEdit = new QLineEdit(WidgetLib);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 150, 113, 21));

        retranslateUi(WidgetLib);

        QMetaObject::connectSlotsByName(WidgetLib);
    } // setupUi

    void retranslateUi(QWidget *WidgetLib)
    {
        WidgetLib->setWindowTitle(QApplication::translate("WidgetLib", "Form", nullptr));
        pushButton->setText(QApplication::translate("WidgetLib", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetLib: public Ui_WidgetLib {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETLIB_H
