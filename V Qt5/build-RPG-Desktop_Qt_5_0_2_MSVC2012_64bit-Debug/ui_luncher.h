/********************************************************************************
** Form generated from reading UI file 'luncher.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LUNCHER_H
#define UI_LUNCHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_luncher
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *luncher)
    {
        if (luncher->objectName().isEmpty())
            luncher->setObjectName(QStringLiteral("luncher"));
        luncher->resize(400, 300);
        centralWidget = new QWidget(luncher);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 70, 141, 81));
        luncher->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(luncher);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        luncher->setMenuBar(menuBar);
        mainToolBar = new QToolBar(luncher);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        luncher->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(luncher);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        luncher->setStatusBar(statusBar);

        retranslateUi(luncher);

        QMetaObject::connectSlotsByName(luncher);
    } // setupUi

    void retranslateUi(QMainWindow *luncher)
    {
        luncher->setWindowTitle(QApplication::translate("luncher", "luncher", 0));
        pushButton->setText(QApplication::translate("luncher", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class luncher: public Ui_luncher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LUNCHER_H
