#pragma once
#include "ui_hello_notepad.h"
#include <QMainWindow>
#include<QString>
class hello_notepad : public QMainWindow {
    Q_OBJECT
    
public:
    hello_notepad(QWidget* parent = nullptr);
    ~hello_notepad();

private slots:
    void New();
    void Save();

private:
    Ui_hello_notepad* ui;
    QString currentFile;
};
