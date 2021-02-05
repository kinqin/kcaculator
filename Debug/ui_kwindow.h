/********************************************************************************
** Form generated from reading UI file 'kwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KWINDOW_H
#define UI_KWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Kwindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *Num7;
    QPushButton *Num8;
    QPushButton *Num9;
    QPushButton *sumBtn;
    QPushButton *backspaceBtn;
    QPushButton *Num4;
    QPushButton *Num5;
    QPushButton *Num6;
    QPushButton *subBtn;
    QPushButton *Num1;
    QPushButton *Num2;
    QPushButton *Num3;
    QPushButton *mulBtn;
    QPushButton *equalBtn;
    QPushButton *clearBtn;
    QPushButton *Num0;
    QPushButton *dotBtn;
    QPushButton *divBTn;

    void setupUi(QMainWindow *Kwindow)
    {
        if (Kwindow->objectName().isEmpty())
            Kwindow->setObjectName(QStringLiteral("Kwindow"));
        Kwindow->setWindowModality(Qt::NonModal);
        Kwindow->resize(300, 400);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Kwindow->sizePolicy().hasHeightForWidth());
        Kwindow->setSizePolicy(sizePolicy);
        Kwindow->setMinimumSize(QSize(300, 400));
        Kwindow->setMaximumSize(QSize(300, 400));
        centralwidget = new QWidget(Kwindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 277, 101));
        lineEdit->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(11, 141, 276, 220));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Num7 = new QPushButton(widget);
        Num7->setObjectName(QStringLiteral("Num7"));
        sizePolicy.setHeightForWidth(Num7->sizePolicy().hasHeightForWidth());
        Num7->setSizePolicy(sizePolicy);
        Num7->setMinimumSize(QSize(50, 50));
        Num7->setMaximumSize(QSize(50, 50));
        QFont font;
        font.setPointSize(16);
        Num7->setFont(font);

        gridLayout->addWidget(Num7, 0, 0, 1, 1);

        Num8 = new QPushButton(widget);
        Num8->setObjectName(QStringLiteral("Num8"));
        sizePolicy.setHeightForWidth(Num8->sizePolicy().hasHeightForWidth());
        Num8->setSizePolicy(sizePolicy);
        Num8->setMinimumSize(QSize(50, 50));
        Num8->setMaximumSize(QSize(50, 50));
        Num8->setFont(font);

        gridLayout->addWidget(Num8, 0, 1, 1, 1);

        Num9 = new QPushButton(widget);
        Num9->setObjectName(QStringLiteral("Num9"));
        sizePolicy.setHeightForWidth(Num9->sizePolicy().hasHeightForWidth());
        Num9->setSizePolicy(sizePolicy);
        Num9->setMinimumSize(QSize(50, 50));
        Num9->setMaximumSize(QSize(50, 50));
        Num9->setFont(font);

        gridLayout->addWidget(Num9, 0, 2, 1, 1);

        sumBtn = new QPushButton(widget);
        sumBtn->setObjectName(QStringLiteral("sumBtn"));
        sizePolicy.setHeightForWidth(sumBtn->sizePolicy().hasHeightForWidth());
        sumBtn->setSizePolicy(sizePolicy);
        sumBtn->setMinimumSize(QSize(50, 50));
        sumBtn->setMaximumSize(QSize(50, 50));
        sumBtn->setFont(font);

        gridLayout->addWidget(sumBtn, 0, 3, 1, 1);

        backspaceBtn = new QPushButton(widget);
        backspaceBtn->setObjectName(QStringLiteral("backspaceBtn"));
        sizePolicy.setHeightForWidth(backspaceBtn->sizePolicy().hasHeightForWidth());
        backspaceBtn->setSizePolicy(sizePolicy);
        backspaceBtn->setMinimumSize(QSize(50, 106));
        backspaceBtn->setMaximumSize(QSize(50, 106));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(13);
        backspaceBtn->setFont(font1);

        gridLayout->addWidget(backspaceBtn, 0, 4, 2, 1);

        Num4 = new QPushButton(widget);
        Num4->setObjectName(QStringLiteral("Num4"));
        sizePolicy.setHeightForWidth(Num4->sizePolicy().hasHeightForWidth());
        Num4->setSizePolicy(sizePolicy);
        Num4->setMinimumSize(QSize(50, 50));
        Num4->setMaximumSize(QSize(50, 50));
        Num4->setFont(font);

        gridLayout->addWidget(Num4, 1, 0, 1, 1);

        Num5 = new QPushButton(widget);
        Num5->setObjectName(QStringLiteral("Num5"));
        sizePolicy.setHeightForWidth(Num5->sizePolicy().hasHeightForWidth());
        Num5->setSizePolicy(sizePolicy);
        Num5->setMinimumSize(QSize(50, 50));
        Num5->setMaximumSize(QSize(50, 50));
        Num5->setFont(font);

        gridLayout->addWidget(Num5, 1, 1, 1, 1);

        Num6 = new QPushButton(widget);
        Num6->setObjectName(QStringLiteral("Num6"));
        sizePolicy.setHeightForWidth(Num6->sizePolicy().hasHeightForWidth());
        Num6->setSizePolicy(sizePolicy);
        Num6->setMinimumSize(QSize(50, 50));
        Num6->setMaximumSize(QSize(50, 50));
        Num6->setFont(font);

        gridLayout->addWidget(Num6, 1, 2, 1, 1);

        subBtn = new QPushButton(widget);
        subBtn->setObjectName(QStringLiteral("subBtn"));
        sizePolicy.setHeightForWidth(subBtn->sizePolicy().hasHeightForWidth());
        subBtn->setSizePolicy(sizePolicy);
        subBtn->setMinimumSize(QSize(50, 50));
        subBtn->setMaximumSize(QSize(50, 50));
        subBtn->setFont(font);

        gridLayout->addWidget(subBtn, 1, 3, 1, 1);

        Num1 = new QPushButton(widget);
        Num1->setObjectName(QStringLiteral("Num1"));
        sizePolicy.setHeightForWidth(Num1->sizePolicy().hasHeightForWidth());
        Num1->setSizePolicy(sizePolicy);
        Num1->setMinimumSize(QSize(50, 50));
        Num1->setMaximumSize(QSize(50, 50));
        Num1->setFont(font);

        gridLayout->addWidget(Num1, 2, 0, 1, 1);

        Num2 = new QPushButton(widget);
        Num2->setObjectName(QStringLiteral("Num2"));
        sizePolicy.setHeightForWidth(Num2->sizePolicy().hasHeightForWidth());
        Num2->setSizePolicy(sizePolicy);
        Num2->setMinimumSize(QSize(50, 50));
        Num2->setMaximumSize(QSize(50, 50));
        Num2->setFont(font);

        gridLayout->addWidget(Num2, 2, 1, 1, 1);

        Num3 = new QPushButton(widget);
        Num3->setObjectName(QStringLiteral("Num3"));
        sizePolicy.setHeightForWidth(Num3->sizePolicy().hasHeightForWidth());
        Num3->setSizePolicy(sizePolicy);
        Num3->setMinimumSize(QSize(50, 50));
        Num3->setMaximumSize(QSize(50, 50));
        Num3->setFont(font);

        gridLayout->addWidget(Num3, 2, 2, 1, 1);

        mulBtn = new QPushButton(widget);
        mulBtn->setObjectName(QStringLiteral("mulBtn"));
        sizePolicy.setHeightForWidth(mulBtn->sizePolicy().hasHeightForWidth());
        mulBtn->setSizePolicy(sizePolicy);
        mulBtn->setMinimumSize(QSize(50, 50));
        mulBtn->setMaximumSize(QSize(50, 50));
        mulBtn->setFont(font);

        gridLayout->addWidget(mulBtn, 2, 3, 1, 1);

        equalBtn = new QPushButton(widget);
        equalBtn->setObjectName(QStringLiteral("equalBtn"));
        sizePolicy.setHeightForWidth(equalBtn->sizePolicy().hasHeightForWidth());
        equalBtn->setSizePolicy(sizePolicy);
        equalBtn->setMinimumSize(QSize(50, 106));
        equalBtn->setMaximumSize(QSize(50, 106));
        equalBtn->setFont(font);

        gridLayout->addWidget(equalBtn, 2, 4, 2, 1);

        clearBtn = new QPushButton(widget);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));
        sizePolicy.setHeightForWidth(clearBtn->sizePolicy().hasHeightForWidth());
        clearBtn->setSizePolicy(sizePolicy);
        clearBtn->setMinimumSize(QSize(50, 50));
        clearBtn->setMaximumSize(QSize(50, 50));
        clearBtn->setFont(font);

        gridLayout->addWidget(clearBtn, 3, 0, 1, 1);

        Num0 = new QPushButton(widget);
        Num0->setObjectName(QStringLiteral("Num0"));
        sizePolicy.setHeightForWidth(Num0->sizePolicy().hasHeightForWidth());
        Num0->setSizePolicy(sizePolicy);
        Num0->setMinimumSize(QSize(50, 50));
        Num0->setMaximumSize(QSize(50, 50));
        Num0->setFont(font);

        gridLayout->addWidget(Num0, 3, 1, 1, 1);

        dotBtn = new QPushButton(widget);
        dotBtn->setObjectName(QStringLiteral("dotBtn"));
        sizePolicy.setHeightForWidth(dotBtn->sizePolicy().hasHeightForWidth());
        dotBtn->setSizePolicy(sizePolicy);
        dotBtn->setMinimumSize(QSize(50, 50));
        dotBtn->setMaximumSize(QSize(50, 50));
        dotBtn->setFont(font);

        gridLayout->addWidget(dotBtn, 3, 2, 1, 1);

        divBTn = new QPushButton(widget);
        divBTn->setObjectName(QStringLiteral("divBTn"));
        sizePolicy.setHeightForWidth(divBTn->sizePolicy().hasHeightForWidth());
        divBTn->setSizePolicy(sizePolicy);
        divBTn->setMinimumSize(QSize(50, 50));
        divBTn->setMaximumSize(QSize(50, 50));
        QFont font2;
        font2.setPointSize(12);
        divBTn->setFont(font2);

        gridLayout->addWidget(divBTn, 3, 3, 1, 1);

        Kwindow->setCentralWidget(centralwidget);

        retranslateUi(Kwindow);

        QMetaObject::connectSlotsByName(Kwindow);
    } // setupUi

    void retranslateUi(QMainWindow *Kwindow)
    {
        Kwindow->setWindowTitle(QApplication::translate("Kwindow", "Kwindow", nullptr));
        Num7->setText(QApplication::translate("Kwindow", "7", nullptr));
        Num8->setText(QApplication::translate("Kwindow", "8", nullptr));
        Num9->setText(QApplication::translate("Kwindow", "9", nullptr));
        sumBtn->setText(QApplication::translate("Kwindow", "+", nullptr));
        backspaceBtn->setText(QApplication::translate("Kwindow", "\342\206\220", nullptr));
        Num4->setText(QApplication::translate("Kwindow", "4", nullptr));
        Num5->setText(QApplication::translate("Kwindow", "5", nullptr));
        Num6->setText(QApplication::translate("Kwindow", "6", nullptr));
        subBtn->setText(QApplication::translate("Kwindow", "-", nullptr));
        Num1->setText(QApplication::translate("Kwindow", "1", nullptr));
        Num2->setText(QApplication::translate("Kwindow", "2", nullptr));
        Num3->setText(QApplication::translate("Kwindow", "3", nullptr));
        mulBtn->setText(QApplication::translate("Kwindow", "*", nullptr));
        equalBtn->setText(QApplication::translate("Kwindow", "=", nullptr));
        clearBtn->setText(QApplication::translate("Kwindow", "C", nullptr));
        Num0->setText(QApplication::translate("Kwindow", "0", nullptr));
        dotBtn->setText(QApplication::translate("Kwindow", ".", nullptr));
        divBTn->setText(QApplication::translate("Kwindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Kwindow: public Ui_Kwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KWINDOW_H
