/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_initial_T;
    QLabel *label_time_segment;
    QPlainTextEdit *initial_T;
    QPlainTextEdit *time_segment;
    QLabel *label_first_layer_num;
    QPlainTextEdit *first_layer_num;
    QPushButton *exec_button;
    QFrame *line;
    QLabel *label_c;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextEdit *content;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(845, 677);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_initial_T = new QLabel(centralWidget);
        label_initial_T->setObjectName(QStringLiteral("label_initial_T"));
        label_initial_T->setGeometry(QRect(30, 20, 121, 21));
        label_time_segment = new QLabel(centralWidget);
        label_time_segment->setObjectName(QStringLiteral("label_time_segment"));
        label_time_segment->setGeometry(QRect(410, 30, 131, 16));
        initial_T = new QPlainTextEdit(centralWidget);
        initial_T->setObjectName(QStringLiteral("initial_T"));
        initial_T->setGeometry(QRect(140, 20, 111, 31));
        time_segment = new QPlainTextEdit(centralWidget);
        time_segment->setObjectName(QStringLiteral("time_segment"));
        time_segment->setGeometry(QRect(550, 20, 111, 31));
        label_first_layer_num = new QLabel(centralWidget);
        label_first_layer_num->setObjectName(QStringLiteral("label_first_layer_num"));
        label_first_layer_num->setGeometry(QRect(30, 70, 101, 20));
        first_layer_num = new QPlainTextEdit(centralWidget);
        first_layer_num->setObjectName(QStringLiteral("first_layer_num"));
        first_layer_num->setGeometry(QRect(140, 70, 111, 31));
        exec_button = new QPushButton(centralWidget);
        exec_button->setObjectName(QStringLiteral("exec_button"));
        exec_button->setGeometry(QRect(420, 70, 241, 28));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        font.setKerning(false);
        exec_button->setFont(font);
        exec_button->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 0);"));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 110, 801, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_c = new QLabel(centralWidget);
        label_c->setObjectName(QStringLiteral("label_c"));
        label_c->setGeometry(QRect(260, 24, 72, 21));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(20, 130, 801, 491));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 799, 489));
        content = new QTextEdit(scrollAreaWidgetContents);
        content->setObjectName(QStringLiteral("content"));
        content->setGeometry(QRect(0, 0, 801, 481));
        scrollArea->setWidget(scrollAreaWidgetContents);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 845, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_initial_T->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\345\210\235\345\247\213\346\270\251\345\272\246\357\274\232", Q_NULLPTR));
        label_time_segment->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\227\266\351\227\264\351\227\264\351\232\224\346\225\260\357\274\232", Q_NULLPTR));
        label_first_layer_num->setText(QApplication::translate("MainWindow", "\347\254\254\344\270\200\345\261\202\345\210\206\350\243\202\346\225\260\357\274\232", Q_NULLPTR));
        exec_button->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", Q_NULLPTR));
        label_c->setText(QApplication::translate("MainWindow", "\302\260C", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
