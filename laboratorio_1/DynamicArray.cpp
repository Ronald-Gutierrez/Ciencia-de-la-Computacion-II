#include <iostream>
#include "DynamicArray.h"

//Constructor por defecto
DynamicArray::DynamicArray(){
    size = 0;
    arr = new Point[0];
}

//Constructor parametrizado
DynamicArray::DynamicArray(const Point arr[], int size){
    this->size = size;
    this->arr = new Point[size];

    for(int i = 0; i < size; i++)
        this->arr[i] = arr[i];
}

//Constructor copia
DynamicArray::DynamicArray(const DynamicArray &o){
    this->size = o.size;
    this->arr = new Point[o.size];

    for(int i = 0; i < size; i++)
        this->arr[i] = o.arr[i];
}
void DynamicArray::resize(int newSize) {
    Point *tmp = new Point[newSize];
    int minSize = (newSize > size) ? size : newSize;
    for(int i = 0; i < minSize; i++)
        tmp[i] = arr[i];
    delete [] arr;
    size = newSize;
    arr = tmp;
}
//Agregar un valor al final del arreglo
/*
void DynamicArray::push_back(Point elem) {
    Point *tmp = new Point[size+1];
    for(int i = 0; i < size; i++)
        tmp[i] = arr[i];
        
    tmp[size] = elem;

    delete []arr;
    size += 1;
    arr = tmp;
}
*/
void DynamicArray::push_back(Point elem) {
    resize(size + 1);
    arr[size-1] = elem;
}
/*
void DynamicArray::insert(Point elem, int pos){
    if(pos < 1 || pos >size){
        std::cout<<"No existe esa posicion"<<std::endl;
    }
    else{
        Point *aux= new Point[size+1];
        for(int i=0; i>size;i++)
            aux[i]= arr[i];

        for(int j=size; j > pos;j--)
            aux[j]= aux[j-1];

        aux[pos]=elem;
        delete []arr;
        size += 1;
        arr = aux;
    }
}
*/
void DynamicArray::insert(Point elem, int pos){
    resize(size+1);
     for(int j=size-1; j > pos;j--)
            arr[j]= arr[j-1];
        arr[pos]=elem;
}
/*
void DynamicArray::remove(int pos){
    if(pos >size || pos < 1){
        std::cout<<"No existe esa posicion"<<std::endl;
    }
    else{
        Point *aux= new Point[size-1];
        for(int i=0; i>size;i++)
            aux[i]= arr[i];

        for(int j=0;j<size;j++){
            if(j==pos){
                while(j<size){
                    aux[j]=aux[j+1]; // 4 2 6 8 23
                    j++;
                }
            }
        }
        delete []arr;
        size -= 1;
        arr = aux;
        
    }

}
*/
void DynamicArray :: remove (int pos) {
    if( 0 <= pos and pos < size ){
        for(int i = pos; i <= size - 2; i++) {
            arr[i] = arr[i + 1];
        }
    }
    resize (size - 1);
}

void DynamicArray::clear() {
    resize(0);
}
void DynamicArray::print(){
    for(int i=0;i<this->size;i++){
		std::cout<<"("<<this->arr[i].getX()<<" "<<this->arr[i].getY()<<") ";
	}
	std::cout<<'\n';
}
DynamicArray::~DynamicArray(){
    delete []arr;
}