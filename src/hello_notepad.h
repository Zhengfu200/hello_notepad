#pragma once
#include "ui_hello_notepad.h"
#include <QMainWindow>
#include<QString>
class hello_notepad : public QMainWindow {
    Q_OBJECT
    
public:
    hello_notepad(QWidget* parent = nullptr);
    ~hello_notepad();

    bool boldcheck = false;
    bool italiccheck = false;
    bool underlinecheck = false;

private slots:
    void New();
    void Save();
    void Open();
    void Bold();
    void Italic();
    void Underline();    
    void mergeFormat(QTextCharFormat fmt);

private:
    Ui_hello_notepad* ui;
    QString currentFile;
};
