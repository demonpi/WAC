/********************************************************************************
** Form generated from reading UI file 'wac.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAC_H
#define UI_WAC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WACClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WACClass)
    {
        if (WACClass->objectName().isEmpty())
            WACClass->setObjectName(QStringLiteral("WACClass"));
        WACClass->resize(600, 400);
        menuBar = new QMenuBar(WACClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        WACClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WACClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WACClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(WACClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        WACClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(WACClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WACClass->setStatusBar(statusBar);

        retranslateUi(WACClass);

        QMetaObject::connectSlotsByName(WACClass);
    } // setupUi

    void retranslateUi(QMainWindow *WACClass)
    {
        WACClass->setWindowTitle(QApplication::translate("WACClass", "WAC", 0));
    } // retranslateUi

};

namespace Ui {
    class WACClass: public Ui_WACClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAC_H
