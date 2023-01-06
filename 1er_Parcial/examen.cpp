#include <iostream>

using namespace std;

int main(){
    int arr[]={12,45,69,68,63,15};
    int *ptr = arr+3;

    //primera impresion

    cout<<++(*(ptr++))<<endl;

    //primera impresion 
    cout<<*(--(--ptr))<<endl;
    cout<<--(*(ptr++))<<endl;
    return 0;
}