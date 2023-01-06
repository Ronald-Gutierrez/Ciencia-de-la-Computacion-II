#include <iostream>
using namespace std;

class Sum_Moneda{
    private:
        int dolares;
        int centavos;
    public:
        Sum_Moneda operator+(const Sum_Moneda o){
            Sum_Moneda tmp = {0,0};
            tmp.centavos= centavos + o.centavos;
            tmp.dolares = dolares + o.dolares;
                if(tmp.centavos >= 100){
                    tmp.dolares+=1;
                    tmp.centavos-=100;
                }
            return tmp;
        }
        ostream operator<<(ostream &output, const Sum_Moneda &o ){
            output<<"$"<<o.dolares<<"."<<o.centavos;
        }
        
};


int main(){

    Sum_Moneda a={2,4};
    Sum_Moneda b={1,6};
    Sum_Moneda c = a+b;
    cout<<c<<endl;
    return 0;
}