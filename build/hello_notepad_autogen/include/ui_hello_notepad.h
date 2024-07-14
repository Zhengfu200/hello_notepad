/********************************************************************************
** Form generated from reading UI file 'hello_notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLO_NOTEPAD_H
#define UI_HELLO_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hello_notepad
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionBold;
    QAction *actionItalic;
    QAction *actionunderline;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *hello_notepad)
    {
        if (hello_notepad->objectName().isEmpty())
            hello_notepad->setObjectName(QString::fromUtf8("hello_notepad"));
        hello_notepad->resize(800, 600);
        actionNew = new QAction(hello_notepad);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(hello_notepad);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(hello_notepad);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionBold = new QAction(hello_notepad);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        actionItalic = new QAction(hello_notepad);
        actionItalic->setObjectName(QString::fromUtf8("actionItalic"));
        actionunderline = new QAction(hello_notepad);
        actionunderline->setObjectName(QString::fromUtf8("actionunderline"));
        centralwidget = new QWidget(hello_notepad);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 104, 87));
        hello_notepad->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(hello_notepad);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        hello_notepad->setStatusBar(statusbar);
        toolBar = new QToolBar(hello_notepad);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        hello_notepad->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionBold);
        toolBar->addAction(actionItalic);
        toolBar->addSeparator();
        toolBar->addAction(actionunderline);

        retranslateUi(hello_notepad);

        QMetaObject::connectSlotsByName(hello_notepad);
    } // setupUi

    void retranslateUi(QMainWindow *hello_notepad)
    {
        hello_notepad->setWindowTitle(QCoreApplication::translate("hello_notepad", "hello_notepad", nullptr));
        actionNew->setText(QCoreApplication::translate("hello_notepad", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("hello_notepad", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("hello_notepad", "Save", nullptr));
        actionBold->setText(QCoreApplication::translate("hello_notepad", "Bold", nullptr));
        actionItalic->setText(QCoreApplication::translate("hello_notepad", "Italic", nullptr));
        actionunderline->setText(QCoreApplication::translate("hello_notepad", "underline", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("hello_notepad", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hello_notepad: public Ui_hello_notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLO_NOTEPAD_H
