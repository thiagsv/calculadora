#include "calculator.h"
#include "ui_calculator.h"

#ifndef FIRSTOPERATOR_H
#define FIRSTOPERATOR_H

float result = 0.0;

//FUNCAO QUE RESOLVE A PRIMEIRA OPERACAO DA CALCULADORA
void first(QStringList list){
    if(list.at(1) == '+'){
        QString firstNumber = list.at(0);
        QString secondNumber = list.at(2);
        float num1 = firstNumber.toFloat();
        float num2 = secondNumber.toFloat();
        result = num1 + num2;
    }

    if(list.at(1) == 'x'){
        QString firstNumber = list.at(0);
        QString secondNumber = list.at(2);
        float num1 = firstNumber.toFloat();
        float num2 = secondNumber.toFloat();
        result = num1 * num2;
    }

    if(list.at(1) == '/'){
        QString firstNumber = list.at(0);
        QString secondNumber = list.at(2);
        float num1 = firstNumber.toFloat();
        float num2 = secondNumber.toFloat();
        result = num1 / num2;
    }

    if(list.at(1) == '-'){
        QString firstNumber = list.at(0);
        QString secondNumber = list.at(2);
        float num1 = firstNumber.toFloat();
        float num2 = secondNumber.toFloat();
        result = num1 - num2;
    }
}

#endif // FIRSTOPERATOR_H
