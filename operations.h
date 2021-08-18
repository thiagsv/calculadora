#include "calculator.h"
#include "ui_calculator.h"

#ifndef OPERATIONS_H
#define OPERATIONS_H

//ADICIONANDO E CONTATENANDO NUMEROS
void Calculator::on_button1_clicked()
{
   QString label = this->ui->showResult->text();
   this->ui->showResult->setText(label + '1');
}

void Calculator::on_button2_clicked()
{
    QString label = this->ui->showResult->text();
    this->ui->showResult->setText(label + '2');
}


void Calculator::on_button3_clicked()
{
    QString label = this->ui->showResult->text();
    this->ui->showResult->setText(label + '3');
}


void Calculator::on_button4_clicked()
{
    QString label = this->ui->showResult->text();
    this->ui->showResult->setText(label + '4');
}

void Calculator::on_button5_clicked()
{
    QString label = this->ui->showResult->text();
    this->ui->showResult->setText(label + '5');
}

void Calculator::on_button6_clicked()
{
    QString label = this->ui->showResult->text();
    this->ui->showResult->setText(label + '6');
}


void Calculator::on_button7_clicked()
{
    QString label = this->ui->showResult->text();
    this->ui->showResult->setText(label + '7');
}


void Calculator::on_button8_clicked()
{
    QString label = this->ui->showResult->text();
    this->ui->showResult->setText(label + '8');
}


void Calculator::on_button9_clicked()
{
    QString label = this->ui->showResult->text();
    this->ui->showResult->setText(label + '9');
}


void Calculator::on_button0_clicked()
{
    QString label = this->ui->showResult->text();
    this->ui->showResult->setText(label + '0');
}

//ADICIONANDO E CONTATENANDO OPERADORES
void Calculator::on_plus_clicked()
{
    QString label = this->ui->showResult->text();
    this->ui->showResult->setText(label + ' ' + '+' + ' ');

}

void Calculator::on_minus_clicked()
{
    QString label = this->ui->showResult->text();
    this->ui->showResult->setText(label + ' ' + '-' + ' ');
}

void Calculator::on_multiplier_clicked()
{
    QString label = this->ui->showResult->text();
    this->ui->showResult->setText(label + ' ' + 'x' + ' ');
}

void Calculator::on_divider_clicked()
{
    QString label = this->ui->showResult->text();
    this->ui->showResult->setText(label + ' ' + '/' + ' ');
}

void Calculator::on_buttonCommon_clicked()
{
    QString label = this->ui->showResult->text();
    this->ui->showResult->setText(label + '.');

}


#endif // OPERATIONS_H

