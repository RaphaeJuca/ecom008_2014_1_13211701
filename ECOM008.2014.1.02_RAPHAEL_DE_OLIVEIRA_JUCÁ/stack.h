#ifndef STACKADT_H
#define STACKADT_H
#include <Stack.h>
#include <stdlib.h>
#include <iostream>


using namespace std;
template <typename E> class Stack {
private:
  void operator =(const Stack&) {}
  Stack(const Stack&) {
      E *Stack;
      int top = 0;

  }

public:
  Stack() {
      stack = new int[3]

  }
  virtual ~Stack() {}


  void clear(){

      top=0;
  }

  void push(const E& it){
      if(top < sizeof(stack)){
          for (int i = top, i < sizeof(stack), top++){
               stack[i]=it;
          }
   }
      else{
          stack = (int *) realloc( stack, 2*sizeof(int) );
          for (int i = top, i < sizeof(stack), top++){
              stack[i] = it;
          }


      }
  }


  E pop(){
         E stack = stack[top - 1];
         top--;
         cout << "Pop de: " << stack << endl;

         return 0;
}
    const E& topValue(){
        const E& topValue(){
                return stack[top - 1];
}
    }


    int length(){
            return top;
        }

    };


#endif // STACKADT_H
