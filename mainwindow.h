#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    double compute_grade();
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:

public slots:
    void update_overall();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
