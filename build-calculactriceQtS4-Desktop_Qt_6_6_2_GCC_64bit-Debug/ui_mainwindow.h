/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
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
    QPushButton *pushButtonParentheseOuvrante;
    QPushButton *pushButtonCos;
    QPushButton *pushButton7;
    QPushButton *pushButton0;
    QPushButton *pushButtonPlus;
    QPushButton *pushButton4;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButtonE;
    QPushButton *pushButton9;
    QPushButton *pushButtonParentheseFermante;
    QPushButton *pushButtonC;
    QPushButton *pushButtonSin;
    QPushButton *pushButtonTan;
    QPushButton *pushButton1;
    QPushButton *pushButtonExp;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButtonVirgule;
    QPushButton *pushButtonEgale;
    QPushButton *pushButtonMoins;
    QPushButton *pushButtonDivise;
    QPushButton *pushButton8;
    QPushButton *pushButtonFois;
    QPushButton *pushButtonLog;
    QPushButton *pushButtonLn;
    QPushButton *pushButtonPuissanceY;
    QPushButton *pushButtonPuissance2;
    QPushButton *pushButtonSqrt;
    QPushButton *pushButtonDel1;
    QVBoxLayout *verticalLayout;
    QLabel *LabelCalcul;
    QLabel *LabelResult;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(466, 600);
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
        pushButtonParentheseOuvrante = new QPushButton(tab);
        pushButtonParentheseOuvrante->setObjectName("pushButtonParentheseOuvrante");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonParentheseOuvrante->sizePolicy().hasHeightForWidth());
        pushButtonParentheseOuvrante->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonParentheseOuvrante, 1, 2, 1, 1);

        pushButtonCos = new QPushButton(tab);
        pushButtonCos->setObjectName("pushButtonCos");
        pushButtonCos->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButtonCos->sizePolicy().hasHeightForWidth());
        pushButtonCos->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonCos, 0, 2, 1, 1);

        pushButton7 = new QPushButton(tab);
        pushButton7->setObjectName("pushButton7");
        sizePolicy.setHeightForWidth(pushButton7->sizePolicy().hasHeightForWidth());
        pushButton7->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton7, 2, 1, 1, 1);

        pushButton0 = new QPushButton(tab);
        pushButton0->setObjectName("pushButton0");
        sizePolicy.setHeightForWidth(pushButton0->sizePolicy().hasHeightForWidth());
        pushButton0->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton0, 5, 2, 1, 1);

        pushButtonPlus = new QPushButton(tab);
        pushButtonPlus->setObjectName("pushButtonPlus");
        sizePolicy.setHeightForWidth(pushButtonPlus->sizePolicy().hasHeightForWidth());
        pushButtonPlus->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonPlus, 4, 4, 1, 1);

        pushButton4 = new QPushButton(tab);
        pushButton4->setObjectName("pushButton4");
        sizePolicy.setHeightForWidth(pushButton4->sizePolicy().hasHeightForWidth());
        pushButton4->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton4, 3, 1, 1, 1);

        pushButton2 = new QPushButton(tab);
        pushButton2->setObjectName("pushButton2");
        sizePolicy.setHeightForWidth(pushButton2->sizePolicy().hasHeightForWidth());
        pushButton2->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton2, 4, 2, 1, 1);

        pushButton3 = new QPushButton(tab);
        pushButton3->setObjectName("pushButton3");
        sizePolicy.setHeightForWidth(pushButton3->sizePolicy().hasHeightForWidth());
        pushButton3->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton3, 4, 3, 1, 1);

        pushButtonE = new QPushButton(tab);
        pushButtonE->setObjectName("pushButtonE");
        pushButtonE->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButtonE->sizePolicy().hasHeightForWidth());
        pushButtonE->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonE, 0, 1, 1, 1);

        pushButton9 = new QPushButton(tab);
        pushButton9->setObjectName("pushButton9");
        sizePolicy.setHeightForWidth(pushButton9->sizePolicy().hasHeightForWidth());
        pushButton9->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton9, 2, 3, 1, 1);

        pushButtonParentheseFermante = new QPushButton(tab);
        pushButtonParentheseFermante->setObjectName("pushButtonParentheseFermante");
        sizePolicy.setHeightForWidth(pushButtonParentheseFermante->sizePolicy().hasHeightForWidth());
        pushButtonParentheseFermante->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonParentheseFermante, 1, 3, 1, 1);

        pushButtonC = new QPushButton(tab);
        pushButtonC->setObjectName("pushButtonC");
        sizePolicy.setHeightForWidth(pushButtonC->sizePolicy().hasHeightForWidth());
        pushButtonC->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonC, 1, 1, 1, 1);

        pushButtonSin = new QPushButton(tab);
        pushButtonSin->setObjectName("pushButtonSin");
        pushButtonSin->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButtonSin->sizePolicy().hasHeightForWidth());
        pushButtonSin->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonSin, 0, 3, 1, 1);

        pushButtonTan = new QPushButton(tab);
        pushButtonTan->setObjectName("pushButtonTan");
        pushButtonTan->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButtonTan->sizePolicy().hasHeightForWidth());
        pushButtonTan->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonTan, 0, 4, 1, 1);

        pushButton1 = new QPushButton(tab);
        pushButton1->setObjectName("pushButton1");
        sizePolicy.setHeightForWidth(pushButton1->sizePolicy().hasHeightForWidth());
        pushButton1->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton1, 4, 1, 1, 1);

        pushButtonExp = new QPushButton(tab);
        pushButtonExp->setObjectName("pushButtonExp");
        sizePolicy.setHeightForWidth(pushButtonExp->sizePolicy().hasHeightForWidth());
        pushButtonExp->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonExp, 5, 1, 1, 1);

        pushButton5 = new QPushButton(tab);
        pushButton5->setObjectName("pushButton5");
        sizePolicy.setHeightForWidth(pushButton5->sizePolicy().hasHeightForWidth());
        pushButton5->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton5, 3, 2, 1, 1);

        pushButton6 = new QPushButton(tab);
        pushButton6->setObjectName("pushButton6");
        sizePolicy.setHeightForWidth(pushButton6->sizePolicy().hasHeightForWidth());
        pushButton6->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton6, 3, 3, 1, 1);

        pushButtonVirgule = new QPushButton(tab);
        pushButtonVirgule->setObjectName("pushButtonVirgule");
        sizePolicy.setHeightForWidth(pushButtonVirgule->sizePolicy().hasHeightForWidth());
        pushButtonVirgule->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonVirgule, 5, 3, 1, 1);

        pushButtonEgale = new QPushButton(tab);
        pushButtonEgale->setObjectName("pushButtonEgale");
        sizePolicy.setHeightForWidth(pushButtonEgale->sizePolicy().hasHeightForWidth());
        pushButtonEgale->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonEgale, 5, 4, 1, 1);

        pushButtonMoins = new QPushButton(tab);
        pushButtonMoins->setObjectName("pushButtonMoins");
        sizePolicy.setHeightForWidth(pushButtonMoins->sizePolicy().hasHeightForWidth());
        pushButtonMoins->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonMoins, 3, 4, 1, 1);

        pushButtonDivise = new QPushButton(tab);
        pushButtonDivise->setObjectName("pushButtonDivise");
        sizePolicy.setHeightForWidth(pushButtonDivise->sizePolicy().hasHeightForWidth());
        pushButtonDivise->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonDivise, 1, 4, 1, 1);

        pushButton8 = new QPushButton(tab);
        pushButton8->setObjectName("pushButton8");
        sizePolicy.setHeightForWidth(pushButton8->sizePolicy().hasHeightForWidth());
        pushButton8->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButton8, 2, 2, 1, 1);

        pushButtonFois = new QPushButton(tab);
        pushButtonFois->setObjectName("pushButtonFois");
        sizePolicy.setHeightForWidth(pushButtonFois->sizePolicy().hasHeightForWidth());
        pushButtonFois->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonFois, 2, 4, 1, 1);

        pushButtonLog = new QPushButton(tab);
        pushButtonLog->setObjectName("pushButtonLog");
        pushButtonLog->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButtonLog->sizePolicy().hasHeightForWidth());
        pushButtonLog->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonLog, 1, 0, 1, 1);

        pushButtonLn = new QPushButton(tab);
        pushButtonLn->setObjectName("pushButtonLn");
        pushButtonLn->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButtonLn->sizePolicy().hasHeightForWidth());
        pushButtonLn->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonLn, 2, 0, 1, 1);

        pushButtonPuissanceY = new QPushButton(tab);
        pushButtonPuissanceY->setObjectName("pushButtonPuissanceY");
        pushButtonPuissanceY->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButtonPuissanceY->sizePolicy().hasHeightForWidth());
        pushButtonPuissanceY->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonPuissanceY, 3, 0, 1, 1);

        pushButtonPuissance2 = new QPushButton(tab);
        pushButtonPuissance2->setObjectName("pushButtonPuissance2");
        pushButtonPuissance2->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButtonPuissance2->sizePolicy().hasHeightForWidth());
        pushButtonPuissance2->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonPuissance2, 4, 0, 1, 1);

        pushButtonSqrt = new QPushButton(tab);
        pushButtonSqrt->setObjectName("pushButtonSqrt");
        pushButtonSqrt->setEnabled(true);
        sizePolicy.setHeightForWidth(pushButtonSqrt->sizePolicy().hasHeightForWidth());
        pushButtonSqrt->setSizePolicy(sizePolicy);
        pushButtonSqrt->setAutoFillBackground(false);
        pushButtonSqrt->setInputMethodHints(Qt::ImhNone);
        pushButtonSqrt->setCheckable(false);
        pushButtonSqrt->setAutoDefault(false);
        pushButtonSqrt->setFlat(false);

        gridLayout_3->addWidget(pushButtonSqrt, 5, 0, 1, 1);

        pushButtonDel1 = new QPushButton(tab);
        pushButtonDel1->setObjectName("pushButtonDel1");
        sizePolicy.setHeightForWidth(pushButtonDel1->sizePolicy().hasHeightForWidth());
        pushButtonDel1->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(pushButtonDel1, 0, 0, 1, 1);


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
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName("scrollArea");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy2);
        scrollArea->setMinimumSize(QSize(0, 0));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 410, 509));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 466, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        pushButtonSqrt->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonParentheseOuvrante->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonParentheseOuvrante->setShortcut(QCoreApplication::translate("MainWindow", "(", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButtonCos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
#if QT_CONFIG(shortcut)
        pushButton7->setShortcut(QCoreApplication::translate("MainWindow", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(shortcut)
        pushButton0->setShortcut(QCoreApplication::translate("MainWindow", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButtonPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonPlus->setShortcut(QCoreApplication::translate("MainWindow", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
#if QT_CONFIG(shortcut)
        pushButton4->setShortcut(QCoreApplication::translate("MainWindow", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
#if QT_CONFIG(shortcut)
        pushButton2->setShortcut(QCoreApplication::translate("MainWindow", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
#if QT_CONFIG(shortcut)
        pushButton3->setShortcut(QCoreApplication::translate("MainWindow", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButtonE->setText(QCoreApplication::translate("MainWindow", "e", nullptr));
        pushButton9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
#if QT_CONFIG(shortcut)
        pushButton9->setShortcut(QCoreApplication::translate("MainWindow", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButtonParentheseFermante->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonParentheseFermante->setShortcut(QCoreApplication::translate("MainWindow", ")", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButtonC->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonC->setShortcut(QCoreApplication::translate("MainWindow", "Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButtonSin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButtonTan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
#if QT_CONFIG(shortcut)
        pushButton1->setShortcut(QCoreApplication::translate("MainWindow", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButtonExp->setText(QCoreApplication::translate("MainWindow", "Exp", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonExp->setShortcut(QCoreApplication::translate("MainWindow", "Space", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
#if QT_CONFIG(shortcut)
        pushButton5->setShortcut(QCoreApplication::translate("MainWindow", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
#if QT_CONFIG(shortcut)
        pushButton6->setShortcut(QCoreApplication::translate("MainWindow", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButtonVirgule->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonVirgule->setShortcut(QCoreApplication::translate("MainWindow", ".", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButtonEgale->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonEgale->setShortcut(QCoreApplication::translate("MainWindow", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButtonMoins->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonMoins->setShortcut(QCoreApplication::translate("MainWindow", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButtonDivise->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonDivise->setShortcut(QCoreApplication::translate("MainWindow", "/", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButton8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
#if QT_CONFIG(shortcut)
        pushButton8->setShortcut(QCoreApplication::translate("MainWindow", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButtonFois->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonFois->setShortcut(QCoreApplication::translate("MainWindow", "*", nullptr));
#endif // QT_CONFIG(shortcut)
        pushButtonLog->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButtonLn->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButtonPuissanceY->setText(QCoreApplication::translate("MainWindow", "x^(y)", nullptr));
        pushButtonPuissance2->setText(QCoreApplication::translate("MainWindow", "x^(2)", nullptr));
        pushButtonSqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButtonDel1->setText(QCoreApplication::translate("MainWindow", "<=", nullptr));
#if QT_CONFIG(shortcut)
        pushButtonDel1->setShortcut(QCoreApplication::translate("MainWindow", "Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
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
