#include <iostream>
using namespace std;

struct Sum_Moneda{
        int dolares;
        int centavos;
};

Sum_Moneda operator+(const Sum_Moneda m, const Sum_Moneda o){
            Sum_Moneda tmp = {0,0};
            tmp.centavos= m.centavos + o.centavos;
            tmp.dolares = m.dolares + o.dolares;
            if(tmp.centavos >= 100){
                tmp.dolares+=1;
                tmp.centavos-=100;
            }
            return tmp;
}
ostream operator<<(ostream &output, const Sum_Moneda &o ){
    output<<"$"<<o.dolares<<"."<<o.centavos;
}
int main(){

    Sum_Moneda a={2,5};
    Sum_Moneda b={1,5};
    Sum_Moneda c = a+b;
    cout<<c<<endl;
    return 0;
}