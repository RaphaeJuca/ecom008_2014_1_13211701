#include "minhamatriz.h"
#include <iostream>
#include <QDebug>
#include <QString>

using namespace std;


MinhaMatriz::MinhaMatriz()
{
}

void MinhaMatriz::create(int columns, int rows){
    this->content = new double*[rows];
    for (int i = 0; i < rows; ++i){
        this->content[i] = new double[rows];
    }
    this->columns = columns;
    this->rows = rows;
}

void MinhaMatriz::setElementAt(int column,int row, double value){
    this->content[column][row] = value;

}

double MinhaMatriz::elementAt(int column, int row)const{
    return this->content[column][row];
}


void MinhaMatriz::multiplyBy(double k){
    for(int i=0; i<columns ; i++) {
        for(int j=0; j<rows ; j++){
            content [i][j]=  content [i][j] *k;

        }
    }
}
void MinhaMatriz::sub(const MatrixADT & other)
        {
            for(int i=0; i<this-> rows;i++)
            {
                for(int j=0; j<this->columns; j++)
                {
                    this->content[i][j]-=other.elementAt(i,j);
                }
            }
        }



double MinhaMatriz::determinant(){
double dj=1, di=1;
for(int i=0; i<rows ; i++) {
    for(int j=0; j<columns ; j++){
        content [i][j]=  content [i][j] ;
        if (i==j)
        {
            dj = content [i][j] *dj;
        }
        if (i!=j)
        {
            di = content [i][j] *di;
        }
    }
}

cout <<dj-di;
     cout << endl;
return dj-di;


}

MatrixADT* MinhaMatriz::transpose(){

            MinhaMatriz *aux= new MinhaMatriz();
           for(int i=0; i<this-> rows;i++){

             for(int j=0; j<this->columns; j++){

                   aux->setElementAt(j,i,this->content[i][j]);

                   }

                    return aux;
                }


}



QString MinhaMatriz::toString()
{
    QString matriz = "";
    for(int i=0; i<this->columns;i++)
    {
        matriz=matriz+"\n";

        for(int j=0; j<this->rows; j++)
        {
            matriz=matriz+" ";
            matriz=matriz+QString::number(this->elementAt(i,j));
        }
    }
    return matriz;
}



void MinhaMatriz::print(){
    for (int i = 0; i < rows; ++i){
        for (int j = 0; j < columns; j++){
            cout << this->elementAt(j,i) << " ";
        }
        cout << endl;
    }

}




