#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->setFixedSize(300,150);
    ui->setupUi(this);

    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("E:/SQLite/bdd_urbex.db");

    if (!db.open())
        ui->label_diag->setText("Failed to open database");
    else
        ui->label_diag->setText("Database connected successfully!");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ButtonConnexion_clicked()
{
   QString login,motdepasse;
    login=ui->lineEditLOGIN->text();
    motdepasse=ui->lineEditMDP->text();

    if(!db.isOpen())
    {
        qDebug()<<"Failed to open the database!";
        return;
    }

    QSqlQuery qry;

   if(qry.exec("select * from urbexeur where Login='"+login +"' and MotDePasse='"+motdepasse +"'"))
   {
       int count=0;
       while (qry.next())
       {  count++;  }
       if(count==1)
       {
           ui->label_diag->setText("Connexion réussi!");
           openWindow = new SecDialog(this);
           openWindow->show();
       }

       if(count>1)
       {ui->label_diag->setText("Login et Mot de passe dupliqué!");}

       if(count<1)
       {ui->label_diag->setText("Login et Mot de passe incorrect!");}
   }




    //ui->label_diag->setText("Connexion en cours...");

}
