#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    double hw1 = (double)ui->spinBox->value();
    double hw2 = (double)ui->spinBox_2->value();
    double hw3 = (double)ui->spinBox_3->value();
    double mt1 = (double)ui->spinBox_mt1->value();
    double mt2 = (double) ui->spinBox_mt2->value();
    double final = (double)ui->spinBox_final->value();
    return 0.25 * ((hw1 + hw2 + hw3) / 3) + 0.2 * (mt1 + mt2) + 0.35 * final;
}

void MainWindow::update_overall(){
    // double score = 31.4;
    // double score = static_cast<double>(unused);
    ui->doubleSpinBox->setValue(compute_grade());

    return;
}
