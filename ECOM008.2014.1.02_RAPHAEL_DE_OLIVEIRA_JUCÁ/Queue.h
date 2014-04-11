#ifndef Queue_H
#define Queue_H
#include"Link.h"
#include<iostream>

using namespace std;

template <typename E> class Queue{
private:
    Link<E>* head;
    Link<E>* tail;
    int size;
public:
    Queue() {
        head = tail = new Link<R>();
        size = 0;
    }
    ~Queue() {
        clear();
        delete head;
    }

    void clear() {
        while(head->next != 0) {
            dequeue();
        }
        tail = head;
        size = 0;
    }
    void enQueue(const E& it) {
        tail->next = new Link<E>(it, 0);
        tail = tail->next;
        size++;
    }
    E deQueue() {
        if(size != 0) {
            E it = head->next->element;

            Link<E>* aux = head->next;
            head->next = aux->next;
            if (tail == aux){
                tail = head;
            }

            delete aux;
            size --;
            return it;
        }
        else{
            return 0;
        }
    }
    const E& headValue() const {
        if(size != 0) {
            return head->next->element;
        }
        else{
           return 0;
        }
    }
    int length() const {
        return size;
    }
};


#endif // Queue_H
