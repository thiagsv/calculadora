#include "calculator.h"
#include "ui_calculator.h"
#include "firstOperator.h"

#ifndef OPERATORS_H
#define OPERATORS_H

//PEGA O RESULT ARMAZENADO E REALIZA SUA RESPECTIVA OPERACAO
void operators(QStringList usefulLabel){
    for(int i = 2; i < usefulLabel.size(); i++){
        if(usefulLabel.at(i) == '+'){
            QString secondNumber = usefulLabel.at(i+1);
            float num2 = secondNumber.toFloat();
            result = result + num2;
        }
        else if(usefulLabel.at(i) == 'x'){
            QString secondNumber = usefulLabel.at(i+1);
            float num2 = secondNumber.toFloat();
            result = result * num2;

        }
        else if(usefulLabel.at(i) == '/'){
            QString secondNumber = usefulLabel.at(i+1);
            float num2 = secondNumber.toFloat();
            result = result / num2;

        }
        else if(usefulLabel.at(i) == '-'){
            QString secondNumber = usefulLabel.at(i+1);
            float num2 = secondNumber.toFloat();
            result = result - num2;

    }
  }
}

#endif // OPERATORS_H
