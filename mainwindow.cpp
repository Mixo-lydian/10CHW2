#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <algorithm>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton,SIGNAL(clicked()),
                     this,SLOT(update_overall()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

double MainWindow::compute_grade() {
    double hw1 = (double)ui->spinBox_hw1->value();
    double hw2 = (double)ui->spinBox_hw2->value();
    double hw3 = (double)ui->spinBox_hw3->value();
    double mt1 = (double)ui->spinBox_mt1->value();
    double mt2 = (double) ui->spinBox_mt2->value();
    double final = (double)ui->spinBox_final->value();
    if (ui->classList->currentIndex() == 0) {
        if (ui->radioButton1->isChecked()) return 0.25 * ((hw1 + hw2 + hw3) / 3) + 0.2 * (mt1 + mt2) + 0.35 * final;
        else if (ui->radioButton2->isChecked()) {
            return 0.25 * ((hw1 + hw2 + hw3) / 3) + 0.3 * std::max(mt1, mt2) + 0.44 * final;
        }
        else throw;
    }
    else if (ui->classList->currentIndex() == 1) {
        if (ui->radioButton1->isChecked()) return 0.1 * ((hw1 + hw2 + hw3) / 3) + 0.4 * ((mt1 + mt2) / 2) + 0.5 * final;
        else if (ui->radioButton2->isChecked()) {
            return 0.1 * ((hw1 + hw2 + hw3) / 3) + 0.3 * std::max(mt1, mt2) + 0.6 * final;
        }
        else throw;
    }
    else throw;
}

void MainWindow::update_overall(){
    // double score = 31.4;
    // double score = static_cast<double>(unused);
    ui->doubleSpinBox->setValue(compute_grade());

    return;
}
