#ifndef LUNCHER_H
#define LUNCHER_H

#include <QMainWindow>

namespace Ui {
class luncher;
}

class luncher : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit luncher(QWidget *parent = 0);
    ~luncher();
    
private:
    Ui::luncher *ui;
};

#endif // LUNCHER_H
