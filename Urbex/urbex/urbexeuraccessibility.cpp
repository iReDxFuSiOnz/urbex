#include "urbexeuraccessibility.h"
#include "ui_urbexeuraccessibility.h"

UrbexeurAccessibility::UrbexeurAccessibility(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UrbexeurAccessibility)
{
    ui->setupUi(this);
    this->setWindowTitle("Urbex : Urbexeur Access - v0.1");

}

UrbexeurAccessibility::~UrbexeurAccessibility()
{
    delete ui;
}
