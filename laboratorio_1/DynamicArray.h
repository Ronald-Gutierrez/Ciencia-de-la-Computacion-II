#ifndef __DYNAMICARRAY_H__
#define __DYNAMICARRAY_H__

#include "Point.h"

class DynamicArray
{
    private:
        Point *arr;
        int size;
        void resize(int newSize);
    public:
        DynamicArray();
        DynamicArray(const Point arr[], int size);
        DynamicArray(const DynamicArray &o);
        
        void push_back(Point elem);

        // tarea 
        void insert(Point elem, int pos);
        void remove(int pos);
        void print();
        void clear();
        int setSize(int _size){
            size=_size;
        }
        int getSize() const {
            return size;
        }

        ~DynamicArray();
};

#endif