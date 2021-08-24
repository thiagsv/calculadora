#include "calculator.h"
#include "ui_calculator.h"

float result = 0.0;

void first(QStringList list);
void operators(QStringList usefulLabel);


Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

Calculator::~Calculator()
{
    delete ui;
}

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

//LIMPAR
void Calculator::on_buttonClear_clicked()
{
    this->ui->showResult->clear();
    result = 0;
}

//IGUAL
void Calculator::on_buttonEqual_clicked()
{
    QString label = this->ui->showResult->text();
    QStringList usefulLabel = label.split(QString(' '));
    first(usefulLabel);
    operators(usefulLabel);

    //PASSAR O RESULTADO PARA SRTRING E COLOCAR NO LABEL
    QString last;
    last.setNum(result);
    this->ui->showResult->setText(last);
}

//DELETE
void Calculator::on_delete_2_clicked()
{
   QString label = this->ui->showResult->text();
   QStringList usefulLabel = label.split(QString(' '));
   QString final;

   for(int i = (usefulLabel.size() - 1); i >= 0;i--){
       if(usefulLabel.at(i) == 'x' || '+' || '-' || '/' ){
           usefulLabel.removeAt(i);
           break;
       }
   }
   usefulLabel.removeLast();

   for(int i = 0; i < usefulLabel.size();i++){
        QString a = usefulLabel.at(i) + ' ';
        this->ui->showResult->setText(final + a);
        final = this->ui->showResult->text();
    }
   usefulLabel = final.split(QString(' '));
}

//FUNCOES

//RESOLVE A PRIMEIRA OPERACAO DA CALCULADORA
void first(QStringList list)
{
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

//PEGA O RESULT ARMAZENADO E REALIZA SUA RESPECTIVA OPERACAO
void operators(QStringList usefulLabel)
{
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


