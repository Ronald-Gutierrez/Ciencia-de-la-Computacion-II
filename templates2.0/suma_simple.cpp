#include <iostream>
using namespace std;

template <typename T, typename U>
U suma(const T a, const U b){  // se pone U porque el retorno sera un float
    return a+b;                 // si fuera T sera un entero el resultado, redondeado
}
int main(){
    cout<<suma<int ,float>(1,2.5)<<endl;


    return 0;
    
}