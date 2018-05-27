#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

#include "urbexeuraccessibility.h"
#include "modeinvites.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_ButtonConnexion_clicked();
    void on_ButtonModeInvite_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    UrbexeurAccessibility *openWindowUrbexeur;
    ModeInvites *openWindowInvite;


};

#endif // MAINWINDOW_H
