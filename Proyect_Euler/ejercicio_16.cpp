#include <iostream>
#include <cmath>
#include <string>

long long int  potencia(int base,int exp);
using namespace std;

int main(){
    //
    string cadena;
    long long int resultado=0;
    long long int  numero=pow(2,10);
    cadena =numero;
    //for (int i=0; i<cadena.length(); i++) 
      //  resultado += cadena[i]-'0';

    cout<<cadena;
    
    return 0;
}

long long int  potencia(int base,int exp){
    if(exp==1)
        return base;
    else if(exp==0)
        return 1;
    else
        return base*potencia(base,exp-1);
}