#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "urbexeuraccessibility.h"

#include <QDesktopServices>
#include <QUrl>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //FIXE LA TAILLE DE LA FENETRE
    this->setFixedSize(400,120);
    ui->setupUi(this);

    //DONNER UN TITRE A LA FENETRE
    this->setWindowTitle("Urbex - v0.1");

    //RACCOURCIS POUR FERMER LA FENETRE
    QAction *shortcut_quitter = new QAction(this);
    shortcut_quitter->setShortcut(Qt::Key_Q | Qt::CTRL);

    connect(shortcut_quitter, SIGNAL(triggered()), this, SLOT(close()));
    this->addAction(shortcut_quitter);

    //PERMET DE SAVOIR SI LA BASE DE DONNEE EST DETECTER OU NON

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
           openWindowUrbexeur = new UrbexeurAccessibility(this);
           openWindowUrbexeur ->show();
       }

       if(count>1)
       {ui->label_diag->setText("Login et Mot de passe dupliqué!");}

       if(count<1)
       {ui->label_diag->setText("Login et Mot de passe incorrect!");}
   }




    //ui->label_diag->setText("Connexion en cours...");

}

void MainWindow::on_ButtonInscription_clicked()
{
    QString link_inscription = "https://docs.google.com/forms/d/e/1FAIpQLSf657zhgK09ECKRjK8_ASebRavhWPKZvOT0OaWeyptyfTqc3Q/viewform";
    QDesktopServices::openUrl(QUrl(link_inscription));
}
