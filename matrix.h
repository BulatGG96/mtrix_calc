#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <vector>

using namespace std;
enum error {impossible, mul_impossible, size_0, incorrec_data};
class Matrix
{
private:
    vector<vector<float>> matrix;

public:
    Matrix();
    Matrix(unsigned h, unsigned w) ;
    Matrix(const Matrix &m);
    void set_size(unsigned h, unsigned w);
    void setRows(unsigned rows);
    void setColumns(unsigned columns);
    unsigned width() const;
    unsigned height() const;
    void SetIJ(float, int, int);
    float GetIJ(int, int);
    Matrix operator*(const int);
    Matrix operator+ (const Matrix &);
    Matrix operator- (const Matrix &);
    Matrix operator*(const Matrix &);
    Matrix random();
    float Det(const Matrix &, int);
    void transposed();
    Matrix Minor(const Matrix &, int, int);
    Matrix Soul(Matrix &, float, int);
    Matrix reverse(const Matrix &, int);
    Matrix Swape_Row(int, int);
};

#endif // MATRIX_H
