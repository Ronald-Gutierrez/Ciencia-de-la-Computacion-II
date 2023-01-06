#include <iostream>
using namespace std;

int main(){

    int i=10;
    int &refi=i;
    int *ptri=nullptr;
    ptri=&i;

    int j=i;
    j+=20;
    cout<<i<<endl;
    cout<<j<<endl;

    
    
}