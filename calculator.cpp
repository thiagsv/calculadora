#include "calculator.h"
#include "ui_calculator.h"
#include "QDebug"

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
    operators(usefulLabel);

    //PASSAR O RESULTADO PARA SRTRING E COLOCAR NO LABEL
    QString last;
    last.setNum(result);
    this->ui->showResult->setText(last);
}

//DELETE
void Calculator::on_delete_2_clicked()
{
   int i = 0;
   QString position;
   QString support;
   QString end;
   QString label = this->ui->showResult->text();
   QStringList usefulLabel = label.split(QString(' '));


   //PEGAR O ULTIMO ITEM DA LISTA, ADICIONAR NUMA NOVA LISTA E DIVIDIR OS ALGARISMOS DO NUMERO
   QString lastItem = usefulLabel.last();
   QStringList lastItemList = lastItem.split(QString());

   //APAGAR O ULTIMO ALGARISMO
   lastItemList.removeFirst();
   lastItemList.removeLast();

   //SE ESTIVER VAZIO
   if(lastItemList.isEmpty()){

       usefulLabel.removeLast();
       usefulLabel.removeLast();

       //COLOCAR EM FORMATO DE STRING
       while(i < usefulLabel.size()){
             if(usefulLabel.at(i) == "x" ||usefulLabel.at(i) == "+" ||usefulLabel.at(i) == "-" ||usefulLabel.at(i) == "/"){
               position = " " + usefulLabel.at(i)+ " ";
               support += position;
            }else{
               position = usefulLabel.at(i);
               support += position;
            }
            i+=1;
        }
    //SE NÃO
    }else{

       //CONTANTENAR OS ALGARISMOS RESTANTES
       i = 0;
       while(i < lastItemList.size()-1){
           QString number = lastItemList.at(i);
           end += number;
           i+=1;
        }

       //ATUALIZA O ULTIMO NUMERO
       usefulLabel.last()=end;
       i = 0;
       //COLOCAR EM FORMATO DE STRING
       while(i < usefulLabel.size()){
             if(usefulLabel.at(i) == "x" ||usefulLabel.at(i) == "+" ||usefulLabel.at(i) == "-" ||usefulLabel.at(i) == "/"){
               position = " " + usefulLabel.at(i)+ " ";
               support += position;
            }else{
               position = usefulLabel.at(i);
               support += position;
            }
            i+=1;
       }

       if(usefulLabel.at(usefulLabel.size()-1) == ""){
           usefulLabel.removeLast();
       }
   }

   this->ui->showResult->setText(support);

}

//FUNCOES

//REALIZA AS OPERACOES
void operators(QStringList usefulLabel)
{
    for(int i = 0; i < usefulLabel.size(); i++){
        if(usefulLabel.at(i) == '+'){
            if(result != 0){
                QString secondNumber = usefulLabel.at(i+1);
                float num2 = secondNumber.toFloat();
                result = result + num2;
            }else{
                QString secondNumber = usefulLabel.at(i+1);
                QString firstNumber = usefulLabel.at(i-1);
                float num1 = firstNumber.toFloat();
                float num2 = secondNumber.toFloat();
                result = result + (num1 +num2);
            }
        }
        else if(usefulLabel.at(i) == 'x'){
            if(result != 0){
                QString secondNumber = usefulLabel.at(i+1);
                float num2 = secondNumber.toFloat();
                result = result * num2;
            }else{
                QString secondNumber = usefulLabel.at(i+1);
                QString firstNumber = usefulLabel.at(i-1);
                float num1 = firstNumber.toFloat();
                float num2 = secondNumber.toFloat();
                result = result + (num1 * num2);
            }
        }
        else if(usefulLabel.at(i) == '/'){
            if(result != 0){
                QString secondNumber = usefulLabel.at(i+1);
                float num2 = secondNumber.toFloat();
                result = result / num2;
            }else{
                QString secondNumber = usefulLabel.at(i+1);
                QString firstNumber = usefulLabel.at(i-1);
                float num1 = firstNumber.toFloat();
                float num2 = secondNumber.toFloat();
                result = result + (num1 / num2);
            }

        }
        else if(usefulLabel.at(i) == '-'){
            if(result != 0){
                QString secondNumber = usefulLabel.at(i+1);
                float num2 = secondNumber.toFloat();
                result = result - num2;
            }else{
                QString secondNumber = usefulLabel.at(i+1);
                QString firstNumber = usefulLabel.at(i-1);
                float num1 = firstNumber.toFloat();
                float num2 = secondNumber.toFloat();
                result = result + (num1 - num2);
            }
    }
  }
}


