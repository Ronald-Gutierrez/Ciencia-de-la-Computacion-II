#include <iostream>

using namespace std;

int main(){

    int a[5]={2,4,6,8,10};
    int *ptr=a;             //nota *(a+i)=a[i]    y  a+i = &a[i]
    cout<<a<<endl; // la primera direccion de memoria
    cout<<*a<<endl; //el valor del primero en la lista
    cout<<*(a+2)<<endl; //el valor del tercero  en la lista


    int b[2][3];  //b[0] y b[1] .. representa un arreglo de una dimension de 3 enteros
    int (*p)[3]=b;
    cout<<b<<endl; //&b[0]
    cout<<*b<<endl;  //b[0]=&b[0][0]
    cout<<b+1<<endl; // &b[1] // se mueve la canitdad de elementos osea si era 400, ahora es 412 (mueve 3 enteros)
    cout<<*(b+1)<<endl;  //b[1]= &b[1][0]   es un puntero a entero
    cout<<*(b+1)+2<<endl;  //b[1]+2   &b[1][2]

    //b[i][j] =*(b[i]+j)    =*(*(b+i)+j)

    //para imprimir  *(*(b+1)+2)

    //ARREGLO DE 3 DIMENSIONES
        // c[i][j][j]  = *(*(*(c+i)+j)+k)
        int c[3][2][2];
        int (*ptr)[2][2] = c;

        cout<<c<<endl;  // 
        cout<<*(c[0][1]+1)<<endl; // *(*(*(c+0)+1)+1)  = c[0][1][1]
        cout<<*(c[1]+1)<<endl;    //c[1][1] = &c[1][1][0]

    return 0;
}