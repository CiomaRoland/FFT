#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setStyleSheet("QLabel {color:blue;font-size: 20px;}");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_1_clicked()
{
    if (ui->pushButton_1->text()==""){
        ui->pushButton_1->setText(X_O);
        if(X_O=="X"){
            ui->pushButton_1->setStyleSheet("color:red;");
            X_O="O";
        }
        else{
            ui->pushButton_1->setStyleSheet("color:green;");
            X_O="X";
        }
        pushButtonClick();
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    if (ui->pushButton_2->text()==""){
        ui->pushButton_2->setText(X_O);
        if(X_O=="X"){
            ui->pushButton_2->setStyleSheet("color:red;");
            X_O="O";
        }
        else{
            ui->pushButton_2->setStyleSheet("color:green;");
            X_O="X";
        }
        pushButtonClick();
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    if (ui->pushButton_3->text()==""){
        ui->pushButton_3->setText(X_O);
        if(X_O=="X"){
            ui->pushButton_3->setStyleSheet("color:red;");
            X_O="O";
        }
        else{
            ui->pushButton_3->setStyleSheet("color:green;");
            X_O="X";
        }
        pushButtonClick();
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    if (ui->pushButton_4->text()==""){
        ui->pushButton_4->setText(X_O);
        if(X_O=="X"){
            ui->pushButton_4->setStyleSheet("color:red;");
            X_O="O";
        }
        else{
            ui->pushButton_4->setStyleSheet("color:green;");
            X_O="X";
        }
        pushButtonClick();
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    if (ui->pushButton_5->text()==""){
        ui->pushButton_5->setText(X_O);
        if(X_O=="X"){
            ui->pushButton_5->setStyleSheet("color:red;");
            X_O="O";
        }
        else{
            ui->pushButton_5->setStyleSheet("color:green;");
            X_O="X";
        }
        pushButtonClick();
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    if (ui->pushButton_6->text()==""){
        ui->pushButton_6->setText(X_O);
        if(X_O=="X"){
            ui->pushButton_6->setStyleSheet("color:red;");
            X_O="O";
        }
        else{
            ui->pushButton_6->setStyleSheet("color:green;");
            X_O="X";
        }
        pushButtonClick();
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    if (ui->pushButton_7->text()==""){
        ui->pushButton_7->setText(X_O);
        if(X_O=="X"){
            ui->pushButton_7->setStyleSheet("color:red;");
            X_O="O";
        }
        else{
            ui->pushButton_7->setStyleSheet("color:green;");
            X_O="X";
        }
        pushButtonClick();
    }
}

void MainWindow::on_pushButton_8_clicked()
{
    if (ui->pushButton_8->text()==""){
        ui->pushButton_8->setText(X_O);
        if(X_O=="X"){
            ui->pushButton_8->setStyleSheet("color:red;");
            X_O="O";
        }
        else{
            ui->pushButton_8->setStyleSheet("color:green;");
            X_O="X";
        }
        pushButtonClick();
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    if (ui->pushButton_9->text()==""){
        ui->pushButton_9->setText(X_O);
        if(X_O=="X"){
            ui->pushButton_9->setStyleSheet("color:red;");
            X_O="O";
        }
        else{
            ui->pushButton_9->setStyleSheet("color:green;");
            X_O="X";
        }
        pushButtonClick();
    }
}

void MainWindow::on_pushButton_clicked()
{
    ui->pushButton_1->setEnabled(true);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ui->pushButton_6->setEnabled(true);
    ui->pushButton_7->setEnabled(true);
    ui->pushButton_8->setEnabled(true);
    ui->pushButton_9->setEnabled(true);
    ui->pushButton_1->setText("");
    ui->pushButton_2->setText("");
    ui->pushButton_3->setText("");
    ui->pushButton_4->setText("");
    ui->pushButton_5->setText("");
    ui->pushButton_6->setText("");
    ui->pushButton_7->setText("");
    ui->pushButton_8->setText("");
    ui->pushButton_9->setText("");
    ui->label->setStyleSheet("QLabel {color:blue;font-size: 20px;}");
    ui->label_2->setStyleSheet("QLabel {color:black;font-size: 10px;}");
    player=1;
    X_O="X";

}
void MainWindow::blokkol(){
    ui->pushButton_1->setEnabled(false);
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ui->pushButton_6->setEnabled(false);
    ui->pushButton_7->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->pushButton_9->setEnabled(false);
}
void MainWindow::pushButtonClick(){
    QString str_1=ui->pushButton_1->text();
    QString str_2=ui->pushButton_2->text();
    QString str_3=ui->pushButton_3->text();
    QString str_4=ui->pushButton_4->text();
    QString str_5=ui->pushButton_5->text();
    QString str_6=ui->pushButton_6->text();
    QString str_7=ui->pushButton_7->text();
    QString str_8=ui->pushButton_8->text();
    QString str_9=ui->pushButton_9->text();
    if (str_1==str_2 && str_2==str_3 && str_1!=""){
        blokkol();
        QString valasz="Játékos " + QString::number(player) + " nyert";
        QMessageBox::information(this,"Nyertes",valasz);
        return;
    }
    if (str_3==str_6 && str_6==str_9 && str_3!=""){
        blokkol();
        QString valasz="Játékos 4" + QString::number(player) + " nyert";
        QMessageBox::information(this,"Nyertes",valasz);
        return;
    }
    if (str_7==str_8 && str_8==str_9 && str_7!=""){
        blokkol();
        QString valasz="Játékos " + QString::number(player) + " nyert";
        QMessageBox::information(this,"Nyertes",valasz);
        return;
    }
    if (str_1==str_4 && str_4==str_7 && str_1!=""){
        blokkol();
        QString valasz="Játékos " + QString::number(player) + " nyert";
        QMessageBox::information(this,"Nyertes",valasz);
        return;
    }
    if (str_1==str_5 && str_5==str_9 && str_1!=""){
        blokkol();
        QString valasz="Játékos " + QString::number(player) + " nyert";
        QMessageBox::information(this,"Nyertes",valasz);
        return;
    }
    if (str_3==str_5 && str_5==str_7 && str_3!=""){
        blokkol();
        QString valasz="Játékos " + QString::number(player) + " nyert";
        QMessageBox::information(this,"Nyertes",valasz);
        return;
    }
    if (str_4==str_5 && str_5==str_6 && str_4!=""){
        blokkol();
        QString valasz="Játékos " + QString::number(player) + " nyert";
        QMessageBox::information(this,"Nyertes",valasz);
        return;
    }
    if (str_2==str_5 && str_5==str_8 && str_2!=""){
        blokkol();
        QString valasz="Játékosvoid " + QString::number(player) + " nyert";
        QMessageBox::information(this,"Nyertes",valasz);
        return;
    }
    if (str_1!="" && str_2!="" && str_3!="" && str_4!="" && str_5!="" && str_6!="" && str_7!="" && str_8!="" && str_9!=""){
        QMessageBox::information(this,"Nyertes","Döntetlen!");
        blokkol();
        return;
    }
    if (player==1){
        ui->label->setStyleSheet("QLabel {color:black;font-size: 10px;}");
        ui->label_2->setStyleSheet("QLabel {color:blue;font-size: 20px;}");
        player=2;
    }else{
        ui->label_2->setStyleSheet("QLabel {color:black;font-size: 10px;}");
        ui->label->setStyleSheet("QLabel {color:blue;font-size: 20px;}");
        player=1;
    }
}
