#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int arr[5]; // la direccion de memoria va de 4 en 4 
    int *p=arr;

    // &arr = arr
    cout<<*p+1<<endl;
    cout<<&arr<<endl;
    cout<<arr+1<<endl;
    cout<<*arr+2<<endl;
    return 0;

}