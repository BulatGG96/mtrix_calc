#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "matrix.h"
#include "function.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setRowCount(QTableWidget *x, int a)
{
    x->setRowCount(a);

    for (auto i = 0; i < a; i++)
    {
        QTableWidgetItem *cell;
        if (x->item(i, 0) == NULL )
        {
            cell = new QTableWidgetItem();
            x->setItem(i, 0, cell);
        }
    }
}


void MainWindow::setColumnCount(QTableWidget *x, int a)
{
    x->setColumnCount(a);
    for (auto i = 0; i < a; i++)
    {
        QTableWidgetItem *cell;
        if (x->item(0, i) == NULL )
        {
            cell = new QTableWidgetItem();
            x->setItem(0, i, cell);
        }
    }
}

void MainWindow::on_rowsA_spinBox_valueChanged(int arg1)
{
    setRowCount(ui->MatrixA_tableWidget, arg1);
    a.setRows(arg1);

}

void MainWindow::on_columsA_spinBox_valueChanged(int arg1)
{
    setColumnCount(ui->MatrixA_tableWidget, arg1);
    a.setColumns(arg1);
}

void MainWindow::on_rowsB_spinBox_valueChanged(int arg1)
{
    setRowCount(ui->MatrixB_tableWidget, arg1);
    b.setRows(arg1);
}


void MainWindow::on_columsB_spinBox_valueChanged(int arg1)
{
    setColumnCount(ui->MatrixB_tableWidget, arg1);
    b.setColumns(arg1);
}


void MainWindow::on_Button_detA_clicked()
{
    Determinant(a,ui->MatrixA_tableWidget,ui->label_detA);
}

void MainWindow::on_Button_detB_clicked()
{
    Determinant(b,ui->MatrixB_tableWidget,ui->label_detB);
}

void MainWindow::on_Button_transposeA_clicked()
{
    Transpose(a,ui->MatrixA_tableWidget);

}

void MainWindow::on_Button_transposeB_clicked()
{
    Transpose(b,ui->MatrixB_tableWidget);
}

void MainWindow::on_Button_sum_clicked()
{


    try{
        a = TableToMatrix(ui->MatrixA_tableWidget);
        b = TableToMatrix(ui->MatrixB_tableWidget);
        res = a+b;
        ui->result_tableWidget->setRowCount(ui->MatrixA_tableWidget->rowCount());
        ui->result_tableWidget->setColumnCount(ui->MatrixA_tableWidget->columnCount());
        MatrixToTable(res, ui->result_tableWidget);
    }
    catch(const error message){
        if (message == impossible)
            ShowErrorMsg(impossible);
        if (message == incorrec_data)
            ShowErrorMsg(incorrec_data);
    }

}

void MainWindow::on_Button_sub_clicked()
{
    try{
        a = TableToMatrix(ui->MatrixA_tableWidget);
        b = TableToMatrix(ui->MatrixB_tableWidget);
        res = a-b;
        ui->result_tableWidget->setRowCount(ui->MatrixA_tableWidget->rowCount());
        ui->result_tableWidget->setColumnCount(ui->MatrixA_tableWidget->columnCount());
        MatrixToTable(res, ui->result_tableWidget);
    }
    catch(const error message){
        if (message == impossible)
            ShowErrorMsg(impossible);
        if (message == incorrec_data)
            ShowErrorMsg(incorrec_data);
    }

}

void MainWindow::on_Button_mul_clicked()
{

    try{
        a = TableToMatrix(ui->MatrixA_tableWidget);
        b = TableToMatrix(ui->MatrixB_tableWidget);
        res = a*b;
        ui->result_tableWidget->setRowCount(ui->MatrixA_tableWidget->rowCount());
        ui->result_tableWidget->setColumnCount(ui->MatrixA_tableWidget->columnCount());
        MatrixToTable(res, ui->result_tableWidget);
    }
    catch(const error message){
        if (message == mul_impossible)
            ShowErrorMsg(mul_impossible);
        if (message == incorrec_data)
            ShowErrorMsg(incorrec_data);
    }

}

void MainWindow::on_Button_mul_onA_clicked()
{
    Mul_on_number(a,ui->MatrixA_tableWidget,ui->mulA_on);
}

void MainWindow::on_Button_mul_onB_clicked()
{
    Mul_on_number(b,ui->MatrixB_tableWidget,ui->mulB_on);
}

void MainWindow::on_Button_inverseA_clicked()
{
    Inverse(a,ui->MatrixA_tableWidget);
}

void MainWindow::on_Button_inverseB_clicked()
{
    Inverse(b,ui->MatrixB_tableWidget);
}

void MainWindow::on_Button_ToA_clicked()
{
    ToMatrix(a,ui->MatrixA_tableWidget);
}

void MainWindow::on_Button_ToB_clicked()
{
    ToMatrix(b,ui->MatrixB_tableWidget);
}

void MainWindow::on_Button_randomA_clicked()
{
    Random(a,ui->MatrixA_tableWidget);

}

void MainWindow::on_Button_randomB_clicked()
{
    Random(b,ui->MatrixB_tableWidget);
}


void MainWindow::Determinant(Matrix &matrix, QTableWidget *table,QLabel *label){
    int rows = table->rowCount();
    int cols = table->columnCount();
    if ((rows!=0) && (cols!=0)){
        if (rows == cols){//проверка размера матрицы
            try{
                matrix = TableToMatrix(table);
                //вычисляем определитель
                double det = matrix.Det(matrix, rows);
                QString str = QString::number(det, 'f', 5);//перевод в строку вещ.числа
                label->setText(str);//вывод строки в метку
            }
            catch(const error message){
                if (message == incorrec_data)
                    ShowErrorMsg(incorrec_data);
            }
        }
    }
}

void MainWindow::Random(Matrix &matr, QTableWidget *table)
{
    matr.random();
    MatrixToTable(matr,table);

}

void MainWindow::Inverse(Matrix &matr, QTableWidget *table)
{
    int rows = table->rowCount();
    int cols = table->columnCount();
    if ((rows!=0) && (cols!=0)){
        try{
            matr = TableToMatrix(table);
            matr = matr.reverse(matr, rows);
            ui->result_tableWidget->setRowCount(rows);
            ui->result_tableWidget->setColumnCount(cols);
            MatrixToTable(a, ui->result_tableWidget);
        }
        catch(const error message){
            if (message == incorrec_data)
                ShowErrorMsg(incorrec_data);
            if (message == impossible)
                ShowErrorMsg(impossible);
        }
    }
}

void MainWindow::Mul_on_number(Matrix &matr, QTableWidget *table, QLineEdit *numb)
{
    int rows1 = table->rowCount();
    int cols1 = table->columnCount();
    QString s = numb->text();
    if ((rows1!=0) && (cols1!=0)){
        try{
            matr = TableToMatrix(table);
            bool ok;
            float mul = s.toDouble(&ok);
            if (!ok)
                throw incorrec_data;
            res = a * mul;
            ui->result_tableWidget->setRowCount(rows1);
            ui->result_tableWidget->setColumnCount(cols1);
            MatrixToTable(res, ui->result_tableWidget);
        }
        catch(const error message){
            if (message == incorrec_data)
                ShowErrorMsg(incorrec_data);

        }
    }
}

void MainWindow::Transpose(Matrix &matr, QTableWidget *label)
{
    int rows = label->rowCount();
    int cols = label->columnCount();
    if ((rows!=0) && (cols!=0)){
        try{
            matr = TableToMatrix(label);
            matr.transposed();
            ui->result_tableWidget->setRowCount(cols);
            ui->result_tableWidget->setColumnCount(rows);
            MatrixToTable(matr, ui->result_tableWidget);
        }
        catch(const error message){
            if (message == incorrec_data)
                ShowErrorMsg(incorrec_data);
        }
    }
}

void MainWindow::ToMatrix(Matrix &matr, QTableWidget *label)
{
    try{
        matr = TableToMatrix(ui->result_tableWidget);
        Matrix t(matr);
        MatrixToTable(t, label);
    }
    catch (const error message){
        if (message == incorrec_data)
            ShowErrorMsg(incorrec_data);
    }
}
