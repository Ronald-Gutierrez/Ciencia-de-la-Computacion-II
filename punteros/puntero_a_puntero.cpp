#include <iostream>
#include <stdio.h>
using namespace std;

void incremento(int *a);

int main(){ //puntero de puntero

    int x=5;
    int *p=&x;
    int**q=&p;
    int ***r=&q;
    cout<<*p<<endl;
    //cout<<*(*q)<<endl;
    ***r=100;
    **q=***r+2;
    cout<<x<<endl;
    int a=10;
    incremento(&a);
    cout<<a<<endl;
    return 0;

}
void incremento(int *a){ //paso por valor
    *a=*a+1;
}