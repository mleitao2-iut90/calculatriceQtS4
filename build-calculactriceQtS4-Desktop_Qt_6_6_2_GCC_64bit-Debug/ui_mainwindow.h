/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton8;
    QPushButton *pushButton5;
    QPushButton *pushButtonParentheseFermante;
    QPushButton *pushButtonC;
    QPushButton *pushButtonDivise;
    QPushButton *pushButton1;
    QPushButton *pushButton4;
    QPushButton *pushButtonParentheseOuvrante;
    QPushButton *pushButton2;
    QPushButton *pushButton7;
    QPushButton *pushButtonExp;
    QPushButton *pushButton0;
    QPushButton *pushButton6;
    QPushButton *pushButton9;
    QPushButton *pushButtonFois;
    QPushButton *pushButtonMoins;
    QPushButton *pushButtonPlus;
    QPushButton *pushButton3;
    QPushButton *pushButtonVirgule;
    QPushButton *pushButtonEgale;
    QVBoxLayout *verticalLayout;
    QLabel *LabelCalcul;
    QLabel *LabelResult;
    QWidget *tab_2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(422, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        pushButton8 = new QPushButton(tab);
        pushButton8->setObjectName("pushButton8");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton8->sizePolicy().hasHeightForWidth());
        pushButton8->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton8, 1, 1, 1, 1);

        pushButton5 = new QPushButton(tab);
        pushButton5->setObjectName("pushButton5");
        sizePolicy.setHeightForWidth(pushButton5->sizePolicy().hasHeightForWidth());
        pushButton5->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton5, 2, 1, 1, 1);

        pushButtonParentheseFermante = new QPushButton(tab);
        pushButtonParentheseFermante->setObjectName("pushButtonParentheseFermante");
        sizePolicy.setHeightForWidth(pushButtonParentheseFermante->sizePolicy().hasHeightForWidth());
        pushButtonParentheseFermante->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonParentheseFermante, 0, 2, 1, 1);

        pushButtonC = new QPushButton(tab);
        pushButtonC->setObjectName("pushButtonC");
        sizePolicy.setHeightForWidth(pushButtonC->sizePolicy().hasHeightForWidth());
        pushButtonC->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonC, 0, 0, 1, 1);

        pushButtonDivise = new QPushButton(tab);
        pushButtonDivise->setObjectName("pushButtonDivise");
        sizePolicy.setHeightForWidth(pushButtonDivise->sizePolicy().hasHeightForWidth());
        pushButtonDivise->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonDivise, 0, 3, 1, 1);

        pushButton1 = new QPushButton(tab);
        pushButton1->setObjectName("pushButton1");
        sizePolicy.setHeightForWidth(pushButton1->sizePolicy().hasHeightForWidth());
        pushButton1->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton1, 3, 0, 1, 1);

        pushButton4 = new QPushButton(tab);
        pushButton4->setObjectName("pushButton4");
        sizePolicy.setHeightForWidth(pushButton4->sizePolicy().hasHeightForWidth());
        pushButton4->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton4, 2, 0, 1, 1);

        pushButtonParentheseOuvrante = new QPushButton(tab);
        pushButtonParentheseOuvrante->setObjectName("pushButtonParentheseOuvrante");
        sizePolicy.setHeightForWidth(pushButtonParentheseOuvrante->sizePolicy().hasHeightForWidth());
        pushButtonParentheseOuvrante->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonParentheseOuvrante, 0, 1, 1, 1);

        pushButton2 = new QPushButton(tab);
        pushButton2->setObjectName("pushButton2");
        sizePolicy.setHeightForWidth(pushButton2->sizePolicy().hasHeightForWidth());
        pushButton2->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton2, 3, 1, 1, 1);

        pushButton7 = new QPushButton(tab);
        pushButton7->setObjectName("pushButton7");
        sizePolicy.setHeightForWidth(pushButton7->sizePolicy().hasHeightForWidth());
        pushButton7->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton7, 1, 0, 1, 1);

        pushButtonExp = new QPushButton(tab);
        pushButtonExp->setObjectName("pushButtonExp");
        sizePolicy.setHeightForWidth(pushButtonExp->sizePolicy().hasHeightForWidth());
        pushButtonExp->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonExp, 4, 0, 1, 1);

        pushButton0 = new QPushButton(tab);
        pushButton0->setObjectName("pushButton0");
        sizePolicy.setHeightForWidth(pushButton0->sizePolicy().hasHeightForWidth());
        pushButton0->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton0, 4, 1, 1, 1);

        pushButton6 = new QPushButton(tab);
        pushButton6->setObjectName("pushButton6");
        sizePolicy.setHeightForWidth(pushButton6->sizePolicy().hasHeightForWidth());
        pushButton6->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton6, 2, 2, 1, 1);

        pushButton9 = new QPushButton(tab);
        pushButton9->setObjectName("pushButton9");
        sizePolicy.setHeightForWidth(pushButton9->sizePolicy().hasHeightForWidth());
        pushButton9->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton9, 1, 2, 1, 1);

        pushButtonFois = new QPushButton(tab);
        pushButtonFois->setObjectName("pushButtonFois");
        sizePolicy.setHeightForWidth(pushButtonFois->sizePolicy().hasHeightForWidth());
        pushButtonFois->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonFois, 1, 3, 1, 1);

        pushButtonMoins = new QPushButton(tab);
        pushButtonMoins->setObjectName("pushButtonMoins");
        sizePolicy.setHeightForWidth(pushButtonMoins->sizePolicy().hasHeightForWidth());
        pushButtonMoins->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonMoins, 2, 3, 1, 1);

        pushButtonPlus = new QPushButton(tab);
        pushButtonPlus->setObjectName("pushButtonPlus");
        sizePolicy.setHeightForWidth(pushButtonPlus->sizePolicy().hasHeightForWidth());
        pushButtonPlus->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonPlus, 3, 3, 1, 1);

        pushButton3 = new QPushButton(tab);
        pushButton3->setObjectName("pushButton3");
        sizePolicy.setHeightForWidth(pushButton3->sizePolicy().hasHeightForWidth());
        pushButton3->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton3, 3, 2, 1, 1);

        pushButtonVirgule = new QPushButton(tab);
        pushButtonVirgule->setObjectName("pushButtonVirgule");
        sizePolicy.setHeightForWidth(pushButtonVirgule->sizePolicy().hasHeightForWidth());
        pushButtonVirgule->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonVirgule, 4, 2, 1, 1);

        pushButtonEgale = new QPushButton(tab);
        pushButtonEgale->setObjectName("pushButtonEgale");
        sizePolicy.setHeightForWidth(pushButtonEgale->sizePolicy().hasHeightForWidth());
        pushButtonEgale->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonEgale, 4, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        LabelCalcul = new QLabel(tab);
        LabelCalcul->setObjectName("LabelCalcul");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(50);
        sizePolicy1.setHeightForWidth(LabelCalcul->sizePolicy().hasHeightForWidth());
        LabelCalcul->setSizePolicy(sizePolicy1);
        LabelCalcul->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setKerning(true);
        LabelCalcul->setFont(font);
        LabelCalcul->setLayoutDirection(Qt::RightToLeft);
        LabelCalcul->setAutoFillBackground(false);

        verticalLayout->addWidget(LabelCalcul);

        LabelResult = new QLabel(tab);
        LabelResult->setObjectName("LabelResult");
        sizePolicy1.setHeightForWidth(LabelResult->sizePolicy().hasHeightForWidth());
        LabelResult->setSizePolicy(sizePolicy1);
        LabelResult->setMinimumSize(QSize(0, 50));
        LabelResult->setLayoutDirection(Qt::RightToLeft);
        LabelResult->setAutoFillBackground(false);

        verticalLayout->addWidget(LabelResult);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 422, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButtonParentheseFermante->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButtonC->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButtonDivise->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButtonParentheseOuvrante->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButtonExp->setText(QCoreApplication::translate("MainWindow", "Exp", nullptr));
        pushButton0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButtonFois->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButtonMoins->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButtonPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButtonVirgule->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButtonEgale->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        LabelCalcul->setText(QString());
        LabelResult->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
