#pragma once
#include "ui_hello_notepad.h"
#include <QMainWindow>

class hello_notepad : public QMainWindow {
    Q_OBJECT
    
public:
    hello_notepad(QWidget* parent = nullptr);
    ~hello_notepad();

public slots:
    void New();
    void Save();

private:
    Ui_hello_notepad* ui;
};