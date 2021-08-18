#include "calculator.h"
#include "ui_calculator.h"
#include "firstOperator.h"

#ifndef CLEARBUTTON_H
#define CLEARBUTTON_H

void Calculator::on_buttonClear_clicked()
{
    this->ui->showResult->clear();
    result = 0;
}


#endif // CLEARBUTTON_H
