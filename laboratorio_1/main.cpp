#include <iostream>
#include "DynamicArray.cpp"

using namespace std;

int main() {
    DynamicArray p;    
    cout << p.getSize() << endl;

    Point arr[4] = {Point(5,4), Point(1,4), Point(2,4), Point(4,4)};
    int tam = sizeof(arr) / sizeof(arr[0]);

    DynamicArray q(arr, tam);
    cout << q.getSize() << endl;
    q.print();
    
    Point a(8,8);
    q.push_back(a);
    q.print();

    Point z(10,10);
    q.insert(z,2);
    q.print();
    
    q.remove(2);
    q.print();

    q.clear();
    q.print();


    return 0;
}