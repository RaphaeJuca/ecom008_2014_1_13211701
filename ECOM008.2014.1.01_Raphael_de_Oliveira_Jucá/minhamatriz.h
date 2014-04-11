#ifndef MINHAMATRIZ_H
#define MINHAMATRIZ_H
#include "MatrixADT.h"
#include <QString>


class MinhaMatriz : public MatrixADT

{
public:
    MinhaMatriz();
    virtual void create(int columns, int rows);
    virtual void setElementAt(const int column,const int row, double value);
    virtual double elementAt(int column,int row)const;
    virtual void multiplyBy(double k);
    virtual void sub(const MatrixADT & other);
    virtual double determinant();
    virtual MatrixADT * transpose();
    virtual QString toString();
    virtual void print();
    double **content;

private:
    int columns;
    int rows;
};

#endif // MINHAMATRIZ_H
