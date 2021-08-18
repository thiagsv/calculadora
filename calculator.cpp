#include "calculator.h"
#include "ui_calculator.h"
#include "operations.h"
#include "firstOperator.h"
#include "operators.h"
#include "clearButton.h"
#include "QDebug"

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


void Calculator::on_buttonEqual_clicked(){

    QString label = this->ui->showResult->text();
    QStringList usefulLabel = label.split(QString(' '));
    first(usefulLabel);
    operators(usefulLabel);

    //PASSAR O RESULTADO PARA SRTRING E COLOCAR NO LABEL
    QString last;
    last.setNum(result);
    this->ui->showResult->setText(last);
}


void Calculator::on_delete_2_clicked(){

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




