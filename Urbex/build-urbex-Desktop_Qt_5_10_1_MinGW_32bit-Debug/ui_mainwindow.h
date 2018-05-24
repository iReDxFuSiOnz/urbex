/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *ButtonQuitter;
    QGroupBox *groupBox;
    QLabel *label_id;
    QLineEdit *lineEditLOGIN;
    QLabel *label_mdp;
    QLineEdit *lineEditMDP;
    QLabel *label_diag;
    QPushButton *ButtonConnexion;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(294, 159);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ButtonQuitter = new QPushButton(centralWidget);
        ButtonQuitter->setObjectName(QStringLiteral("ButtonQuitter"));
        ButtonQuitter->setGeometry(QRect(148, 74, 51, 23));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 261, 61));
        label_id = new QLabel(groupBox);
        label_id->setObjectName(QStringLiteral("label_id"));
        label_id->setGeometry(QRect(10, 10, 111, 16));
        lineEditLOGIN = new QLineEdit(groupBox);
        lineEditLOGIN->setObjectName(QStringLiteral("lineEditLOGIN"));
        lineEditLOGIN->setGeometry(QRect(10, 30, 113, 20));
        lineEditLOGIN->setInputMethodHints(Qt::ImhNone);
        label_mdp = new QLabel(groupBox);
        label_mdp->setObjectName(QStringLiteral("label_mdp"));
        label_mdp->setGeometry(QRect(140, 10, 111, 17));
        lineEditMDP = new QLineEdit(groupBox);
        lineEditMDP->setObjectName(QStringLiteral("lineEditMDP"));
        lineEditMDP->setGeometry(QRect(140, 30, 113, 20));
        lineEditMDP->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEditMDP->setEchoMode(QLineEdit::Password);
        label_diag = new QLabel(centralWidget);
        label_diag->setObjectName(QStringLiteral("label_diag"));
        label_diag->setGeometry(QRect(17, 77, 131, 16));
        ButtonConnexion = new QPushButton(centralWidget);
        ButtonConnexion->setObjectName(QStringLiteral("ButtonConnexion"));
        ButtonConnexion->setGeometry(QRect(200, 74, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 294, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(ButtonQuitter, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        ButtonQuitter->setText(QApplication::translate("MainWindow", "Quitter", nullptr));
        groupBox->setTitle(QString());
        label_id->setText(QApplication::translate("MainWindow", "Identifiant :", nullptr));
        lineEditLOGIN->setText(QString());
        lineEditLOGIN->setPlaceholderText(QApplication::translate("MainWindow", "Login", nullptr));
        label_mdp->setText(QApplication::translate("MainWindow", "Mot de passe :", nullptr));
        lineEditMDP->setText(QString());
        lineEditMDP->setPlaceholderText(QApplication::translate("MainWindow", "Password", nullptr));
        label_diag->setText(QApplication::translate("MainWindow", "[+] status", nullptr));
        ButtonConnexion->setText(QApplication::translate("MainWindow", "Connexion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
