#include <iostream>
#include "DynamicArray.h"
#include "Curso.h"

using namespace std;

int main() {
    Curso c1("CVV",15,15,"123456");
    Curso c2("CCII",20,20,"aprobar");
    Curso c3("Desarrollo Basado en Plataformas",0,40,"DBP");
    Curso c4("CCII",20,20,"0000000");
    
    Curso arr[3]={c1, c2, c3};
    int tam = sizeof(arr) / sizeof(arr[0]);
    Point a(5,6);

    cout << c3 << endl;

    cout<<a<<endl;

    DynamicArray<Curso> p(arr,tam);
    
    cout << p << endl;
    
    return 0;
}