#ifndef __ITERATOR_H__
#define __ITERATOR_H__

#include <iostream>
#include "Node.h"
#include "LinkedList.h"

template<typename T>
class Iterator;

template<typename T>
std::ostream& operator << (std::ostream &out,const Iterator<T> &a);

template<typename T>
class Iterator{

    private:

        Node<T>* iterator;

    public:

        Iterator();
        Iterator(const Iterator<T>&a);//constructor de copia
        Iterator(Node<T> *a); //constructor de copia de Node a Iterator
        ~Iterator();
        Iterator<T> operator = ( Node<T> *a); //asignacion de copia
        bool operator != ( const Node<T> *a);
        Iterator<T> operator ++();
        friend std::ostream& operator << <>(std::ostream &out,const Iterator<T> &a); 
};

template<typename T>
Iterator<T>::Iterator(){
    this->iterator=nullptr;
}

template<typename T>
Iterator<T>::Iterator(Node<T> *a){
     this->iterator=a;
}

template<typename T>
Iterator<T>::Iterator(const Iterator<T>&a){//constructor de copia
    this->iterator=a.iterator;
}

template<typename T>
Iterator<T>::~Iterator(){
    delete iterator;
}
template<typename T>
Iterator<T> Iterator<T>::operator = ( Node<T> *a){ //asignacion de copia
    this->iterator = a;
    return *this;
}
template<typename T>
bool Iterator<T>::operator != ( const Node<T> *a){
    return this->iterator != a;
}

template<typename T>
Iterator<T> Iterator<T>::operator ++(){    
    if(this->iterator){
        this->iterator = this->iterator->getNext();
    }
    return *this;
}

template<typename T>
std::ostream& operator <<(std::ostream &out, const Iterator<T> &a){
    out<<a.iterator->getValue()<<endl;
    return out;
} 
#endif
