#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <iostream>
#include "Node.h"
using namespace std;

template<class T>
class LinkedList;


template<class T>
std::ostream& operator<<(std::ostream& salida1, const LinkedList<T>& C);

template<class T>
class LinkedList {

    private:
        int size;
        Node<T> *head;
    public:
        
        LinkedList();
        LinkedList(T);
        LinkedList(const LinkedList &);
        ~LinkedList();
        void insertByPosition(T, int);
        void addInit(T);
        void addEnd(T);
        void removeByValue(T);
        void removeByPosition(T);
        void search(T);
        void sizes();
        Node<T>* begin();
        Node<T>* end();


        friend std::ostream& operator<< <>(std::ostream& salida1, const LinkedList<T>& C);
        
};

template<typename T>
LinkedList<T>::LinkedList() {
    this->size = 0;
    this->head = nullptr;
}

template<typename T>
LinkedList<T>::LinkedList(T value) {
    this->size = 1;
    this->head = new Node<T>(value);
}

template<typename T>
LinkedList<T>::LinkedList(const LinkedList &o) {
    this->size = 0;
    this->head = nullptr;
    Node<T>* actual_o = o.head;
    while(actual_o)
    {
        this->insert(actual_o->getValue());
        actual_o = actual_o->getNext();
    }

}

template<typename T>
LinkedList<T>::~LinkedList() {
    Node<T> *actual;
    while (head!=nullptr){
        actual = head->getNext();
        delete head;
        head = actual;
    }
    delete head;
}

/*
template<typename T>
void LinkedList<T>::insert(T value) { // y posicion
    Node<T> *newNode = new Node<T>(value);
    Node<T> *tmp = head;
    if(head==nullptr){
        head = newNode;
    } else {
        if (head->getValue() > value) {
            newNode->setNext(head);
            head = newNode;
        } else {
            while ( (tmp->getNext() != nullptr) &&
                        (tmp->getNext()->getValue() < value) )
            {
                tmp = tmp->getNext();
            }
            newNode->setNext(tmp->getNext());
            tmp->setNext(newNode);
        }
    }
    size++;
}
*/
template<typename T>
void LinkedList<T>::insertByPosition(T value, int pos) { // y posicion
    Node<T> *newNode = new Node<T>(value);
    if(head==nullptr){
        head = newNode;
    } else {
        Node<T> *ptr =head;
        if(pos==0){
            addInit(value);
        }
        else{
            Node<T> *tmp = head;
            int count=1;
            while(count <= pos && tmp->getNext() != nullptr){
                tmp = tmp->getNext();
                count++;
            }
            newNode->setNext(tmp->getNext());
            tmp->setNext(newNode);
        }
    }
    size++;
}

template<typename T>
void LinkedList<T>::addInit(T value){
    Node<T> *newNode = new Node<T>(value); //apunta a head 
    if(head==nullptr){
        head = newNode;
    } else {
        head->getValue();
        newNode->setNext(head);
        head = newNode;
    }
    size++;
}


template<typename T>
void LinkedList<T>::addEnd(T value){
    Node<T> *newNode = new Node<T>(value);
    if(head){
        Node<T> *act=head;
        while(act->getNext()){  //hasta que llegue al final de la lista
            act= act->getNext();
        }
        act->setNext(newNode); // el acutal es al ultimo nodo añadido
    }else{
        head = newNode; // si esta vacia, dirige el apuntador head al nuevo nodo
    }
    size++;
}

template<typename T>
Node<T> *LinkedList<T>::begin(){
    return head;
}

template<typename T>
Node<T> *LinkedList<T>::end(){
    Node<T> *tmp=head;
    if(tmp==nullptr){
        return tmp;
    }
    else{
        while(tmp->getNext() != nullptr){
            tmp=tmp->getNext();
        }
        return tmp;
    }
}

template<typename T>
void LinkedList<T>::removeByPosition(T posicion) {
    if(posicion<size){
        Node<T> *aux, *actual=head;
        if (posicion!=0){
            int i=0;
            while(i<posicion){
                aux = actual; 
                actual = actual->getNext();
                i++;
            }
            aux -> setNext( actual->getNext() ); 
            delete actual;
        }
        else{
            head = head -> getNext(); 
            delete actual;
        }
        size--;
    }
}

template<typename T>
void LinkedList<T>::removeByValue(T value) {
    Node<T> *actual = head;
    int position=0;
    if(size != 0){
        while (actual!=nullptr){
            if ( value == actual->getValue() ){
                removeByPosition(position); break;
            }
            position++; actual = actual->getNext();
        }
    }
}


template<typename T>
void LinkedList<T>::search(T value) {    
    Node<T> *tmp = head;
    int cont1 = 1;
    int cont2 = 0;
 
    while (tmp) {
        if (tmp->getValue() == value) {
            cout << "El valor "<<"' "<< value <<" '"<<" esta en la posicion: " << cont1 << endl;
            cont2++;
        }
        tmp = tmp->getNext();
        cont1++;
    }
 
    if (cont2 == 0) {
        cout << "El valor no existe " << endl;
    }
    cout << endl << endl;
}

template<typename T>
void LinkedList<T>::sizes() {
    int count =0;
    Node<T> *tmp = head;
    while(tmp != nullptr){
        tmp=tmp->getNext();
        count++;
    }
    cout<<"El tamanio de la lista es: "<<count<<endl;
}


template<typename T>
std::ostream& operator << (std::ostream& salida1, const LinkedList<T>& C){
    Node<T>* actual = C.head; 
    salida1 <<" [ ";
    while(actual!=nullptr){
        salida1 << actual->getValue()<<" ";
        actual = actual->getNext();
    }
     salida1 << "] ";
    return salida1;
}

#endif