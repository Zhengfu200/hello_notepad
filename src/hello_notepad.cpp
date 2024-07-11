#include "hello_notepad.h"
#include <qfile.h>

hello_notepad::hello_notepad(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui_hello_notepad)
{
    ui->setupUi(this);
    setCentralWidget(ui->textEdit);

    connect(ui->actionNew,&QAction::triggered,this,&hello_notepad::New);
    connect(ui->actionSave,&QAction::triggered,this,&hello_notepad::Save);
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
}
