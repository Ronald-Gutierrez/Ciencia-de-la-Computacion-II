#include <iostream>

#include "iterator.h"
using namespace std;

int main() {
    LinkedList<int> l1;
    LinkedList<char> l2;

    cout<<"Lista de enteros"<<endl;
    l1.insertByPosition(9999,0);
    l1.insertByPosition(1,1);
    l1.insertByPosition(2,2);
    l1.insertByPosition(3,3);
    l1.insertByPosition(4,4);
    l1.insertByPosition(5,5);
    l1.insertByPosition(100,3);
    l1.insertByPosition(12200,3);
    l1.removeByValue(3);
    
    Iterator<int> it;
    for(it = l1.begin(); it != nullptr; ++it){
        cout<<it;
    }
    
    return 0;
}