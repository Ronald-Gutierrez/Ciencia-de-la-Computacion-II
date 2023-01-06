#include <iostream>
#include <memory>
class Prueba{
    public:

        Prueba(){  //contructor 
            std::cout<<"Inicializando prueba..."<<std::endl;
        }

        ~Prueba(){  //destructor
            std::cout<<"Prueba terminada"<<std::endl;
        }
};

int main(){

    Prueba test1;
    //Prueba *test1 = new Prueba;  //no se hace la liberacion de la memoria
    //delete test1;
    //std::unique_ptr<Prueba> test1 = std::make_unique<Prueba>();
    //std::unique_ptr<Prueba> test1 {new Prueba};
    return 0;
}