#ifndef COOKSCREEN_H
#define COOKSCREEN_H

#include <QDialog>

namespace Ui {
class cookscreen;
}

class cookscreen : public QDialog
{
    Q_OBJECT

public:
    explicit cookscreen(QWidget *parent = nullptr);
    ~cookscreen();

private slots:
    void on_pushButton_clicked();

private:
    Ui::cookscreen *ui;
};

#endif // COOKSCREEN_H
