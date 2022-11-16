#include "mainwindow.h"
#include <QPushButton>
#include <QRadioButton>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Interactive Line Making");
    resize (500,500);


    QRadioButton*Linebutton = new QRadioButton(this);
    Linebutton->setText("Line Tool");
    Linebutton->setGeometry(10,20,80,40);

    QRadioButton*Bezierbutton = new QRadioButton(this);
    Bezierbutton->setText("Bezier Tool");
    Bezierbutton->setGeometry(10,70,80,40);

    QPushButton*Clearbutton = new QPushButton(this);
    Clearbutton->setText("Clear Canvas");
    Clearbutton->setGeometry(10,120,80,40);


}

MainWindow::~MainWindow()
{
}
