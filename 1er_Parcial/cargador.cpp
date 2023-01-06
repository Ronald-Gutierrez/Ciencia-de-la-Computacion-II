#include <iostream>
#include <string>
using namespace std;

class Cargador{
    string _tipo;
    public:
    Cargador(string tipo);
    ~Cargador();
    void cargar();
};

class Celular{
    string _modelo;
    public:
    Celular(string modelo);
    ~Celular();
    void mostrar();
};

Cargador::Cargador(string tipo){
    _tipo=tipo;
}
Celular::Celular(string modelo){
    _modelo=modelo;
}



int main(){

    return 0;
}
