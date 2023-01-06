#include <iostream>
using namespace std;

template <typename T>

class Punto{
    private:
        T x,y;
    public:
        Punto(const T a,const T b): x(a), y(b){}
        T getX();
        T getY();
};
template <typename T>
T Punto<T>::getX(){
    return x;
}
template <typename T>
T Punto<T>::getY(){
    return y;
}
int main(){
    Punto <float> fpunto(2.5,3.5);
    cout<<fpunto.getX()<<" , "<<fpunto.getY()<<endl;
    return 0;
}