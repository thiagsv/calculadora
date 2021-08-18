#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:
    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button4_clicked();

    void on_button5_clicked();

    void on_button6_clicked();

    void on_button7_clicked();

    void on_button8_clicked();

    void on_button9_clicked();

    void on_button0_clicked();

    void on_plus_clicked();

    void on_multiplier_clicked();

    void on_divider_clicked();

    void on_buttonEqual_clicked();

    void on_minus_clicked();

    void on_buttonClear_clicked();

    void on_buttonCommon_clicked();

    void on_delete_2_clicked();

private:
    Ui::Calculator *ui;
};
#endif // CALCULATOR_H
