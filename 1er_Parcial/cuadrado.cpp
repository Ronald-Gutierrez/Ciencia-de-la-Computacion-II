#include <iostream>
#include "figura.h"

class Cuadrado: public Figura{
   public:
   Cuadrado(float lado){
        a= lado;
    }
    ~Cuadrado();
    float Perimetro(){
     return 2*a;
    }
    float Area(){
     return a*a;
    }
};