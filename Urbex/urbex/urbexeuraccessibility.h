#ifndef URBEXEURACCESSIBILITY_H
#define URBEXEURACCESSIBILITY_H

#include <QDialog>

namespace Ui {
class UrbexeurAccessibility;
}

class UrbexeurAccessibility : public QDialog
{
    Q_OBJECT

public:
    explicit UrbexeurAccessibility(QWidget *parent = 0);
    ~UrbexeurAccessibility();

private:
    Ui::UrbexeurAccessibility *ui;
};

#endif // URBEXEURACCESSIBILITY_H
