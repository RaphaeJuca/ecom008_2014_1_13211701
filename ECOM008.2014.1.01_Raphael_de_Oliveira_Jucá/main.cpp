#include "MatrixADT.h"
#include "minhamatriz.h"
#include "outramatriz.h"
#include <iostream>
#include <QString>

using namespace std;

int main(int argc, char *argv[])
{

   MinhaMatriz m;
   MinhaMatriz n;
   m.create(2,2);
   n.create(2,2);
   n.setElementAt(0,0,0);
   n.setElementAt(0,1,4);
   n.setElementAt(1,0,4);
   n.setElementAt(1,1,4);
   m.setElementAt(0,0,1);
   m.setElementAt(0,1,6);
   m.setElementAt(1,0,7);
   m.setElementAt(1,1,8);
   m.sub(n);
   m.multiplyBy(1);
   n.determinant();
   n.print();
   m.print();




     return 0;


}
