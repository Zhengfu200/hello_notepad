#include "hello_notepad.h"
#include <qfile.h>
#include<QFile>
#include<QTextStream>
#include<QFileDialog>
#include<QMessageBox>

hello_notepad::hello_notepad(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui_hello_notepad)
{
    ui->setupUi(this);
    setCentralWidget(ui->textEdit);

    connect(ui->actionNew,&QAction::triggered,this,&hello_notepad::New);
    connect(ui->actionSave,&QAction::triggered,this,&hello_notepad::Save);
    connect(ui->actionOpen,&QAction::triggered,this,&hello_notepad::Open);
}

hello_notepad::~hello_notepad()
{
    delete ui; 
}

void hello_notepad::New()
{
    ui->textEdit->clear();
    setWindowTitle("Hello Notepad");
}

void hello_notepad::Save()
{
    QString fileName;
    if(currentFile.isEmpty())
    {
        fileName = QFileDialog::getSaveFileName(this,"Save",fileName,"*.txt");
        currentFile = fileName;
    }else{
        fileName = currentFile;
    }
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"Error","Cannot save file");
        return;
    }
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();
}

void hello_notepad::Open()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Open","*.txt");
    QFile file(fileName);
    if(!file.open(QIODevice::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"Error","Cannot open file");
        return;
    }
    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
    currentFile = fileName;
}

