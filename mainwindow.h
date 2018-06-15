#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QLabel>
#include "matrix.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void setRowCount(QTableWidget *x, int a);
    void setColumnCount(QTableWidget *x, int a);

private slots:

    void on_Button_randomA_clicked();

    void on_Button_randomB_clicked();

    void on_Button_detA_clicked();

    void on_Button_detB_clicked();

    void on_Button_transposeA_clicked();

    void on_Button_transposeB_clicked();

    void on_Button_sum_clicked();

    void on_Button_sub_clicked();

    void on_Button_mul_clicked();

    void on_Button_mul_onA_clicked();

    void on_Button_mul_onB_clicked();

    void on_Button_inverseA_clicked();

    void on_Button_ToA_clicked();

    void on_Button_ToB_clicked();

    void on_Button_inverseB_clicked();

    void on_rowsA_spinBox_valueChanged(int arg1);

    void on_columsA_spinBox_valueChanged(int arg1);

    void on_rowsB_spinBox_valueChanged(int arg1);

    void on_columsB_spinBox_valueChanged(int arg1);

    void Determinant(Matrix &matrix, QTableWidget *table, QLabel *label);

    void Random(Matrix &matr, QTableWidget *table);

    void Inverse(Matrix &matr, QTableWidget *table);

    void Mul_on_number(Matrix &matr, QTableWidget *table, QLineEdit *numb);

    void Transpose(Matrix &matr, QTableWidget *label);

    void ToMatrix(Matrix &matr, QTableWidget *label);

private:
    Ui::MainWindow *ui;
    Matrix a;
    Matrix b;
    Matrix res;

};

#endif // MAINWINDOW_H
