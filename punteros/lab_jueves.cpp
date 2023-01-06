//arreglos como argumentos a funcion
#include <iostream>

using namespace std;

//sabemos que &arr[i]=arr+i

//            arr[]= *arr  --> es la direccion de memoria del primer elemento
int suma(int arr[],int size);

int main(){

    int a[]={1,2,3};
    int sum=suma(a,3);
    cout<<sum<<endl;
    return 0;
}
int suma(int arr[],int size){

}