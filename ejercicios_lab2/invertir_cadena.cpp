#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main(){
    string cadena,cadena_invertida;
    cout<<"INGRESE LA CADENA "<<endl;
    getline(cin,cadena);
    for(int i=cadena.length()-1;i>=0;i--)
        cadena_invertida+=cadena.at(i); //El carácter en la posición especificada en la cadena
    
    cout<<cadena_invertida<<endl;



    return 0;
}

/*
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(){
    int i,j,k,size;
    char a[100];
    cout<<"INGRESAR LA CADENA DE TEXTO "<<endl;
    cin>>a;
    size=strlen(a);
    for(i=0; i<size; i++){
        for(j=0; j<i; j++){
            char aux=a[0];
            if(a[i]<a[j]){
                aux=a[i];
                a[i]=a[j];
                a[j]= aux;
            }
        }
    }
    cout<<a;
    return 0;
}
*/