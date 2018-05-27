#ifndef MODEINVITES_H
#define MODEINVITES_H

#include <QDialog>

namespace Ui {
class ModeInvites;
}

class ModeInvites : public QDialog
{
    Q_OBJECT

public:
    explicit ModeInvites(QWidget *parent = 0);
    ~ModeInvites();

private:
    Ui::ModeInvites *ui;
};

#endif // MODEINVITES_H
