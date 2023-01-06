#include <iostream>
const float PI = 3.14;
class Figura{
    protected:
        float a;
    public:
        Figura(float ca=0){
            a= ca;
        }
        ~Figura();
        virtual float Perimetro() = 0;
        virtual float Area() = 0;
};