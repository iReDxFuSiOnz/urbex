#include "modeinvites.h"
#include "ui_modeinvites.h"

ModeInvites::ModeInvites(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModeInvites)
{
    ui->setupUi(this);
    this->setWindowTitle("Urbex : Mode Invité - v0.1");

}

ModeInvites::~ModeInvites()
{
    delete ui;
}
