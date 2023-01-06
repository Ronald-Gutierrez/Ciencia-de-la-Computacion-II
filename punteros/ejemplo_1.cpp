#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int a=1025;
    int *p;
    p=&a;
    cout<<*p<<endl; // con asterisco imprime el valor y solo p imprime la direccion de memoria
    char *pc;
    pc= (char*) p;
    
    printf("valor de p: %d" , *p);
    cout<<endl;
    printf("direccion de p: %d" , p);
    cout<<endl;
    printf("direccion de p: %d" , pc);
    cout<<endl;
    printf("valor de pc: %d" , *pc);
    cout<<endl;
    cout<<" PC ++"<<endl;
    
    printf("valor de p: %d" , *(p+1));
    cout<<endl;
    printf("direccion de p: %d" , (p+1));
    cout<<endl;
    printf("direccion de p: %d" , (pc+1));
    cout<<endl;
    printf("valor de pc: %d" , *(pc+1));
    return 0;
}