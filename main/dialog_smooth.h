#ifndef DIALOG_SMOOTH_H
#define DIALOG_SMOOTH_H
#include<all.h>
namespace Ui{
class Dialog_smooth;
}
class Dialog_smooth:public QDialog{
    Q_OBJECT
public:
    explicit Dialog_smooth(QWidget *parent = 0);
    ~Dialog_smooth();
private:
    Ui::Dialog_smooth *ui;
};
#endif//DIALOG_SMOOTH_H
