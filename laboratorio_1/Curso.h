#ifndef __CURSO_H__
#define __CURSO_H__

#include <string>

class Curso {
        std::string nombre;
        double notaFinal;
        int totalEstudiantes;
        std::string codigo;
    public:
        Curso( std::string nombre, double notaFinal, int totalEstudiantes, std::string codigo){
            this->nombre=nombre;
            this->notaFinal=notaFinal;
        }
        ~Curso();
        //seters
        void setNombre(std::string nombre){
            this->nombre=nombre;
        }
        void setNombre(double notaFinal){
            this->notaFinal=notaFinal;
        }
        void setNombre(int totalEstudiantes){
            this->totalEstudiantes=totalEstudiantes;
        }
        void setNombre(std::string codigo){
            this->codigo=codigo;
        }
        
        //geters
        std::string getNombre(std::string nombre){
            return nombre;
        }
        double getNombre(double notaFinal){
            return notaFinal;
        }
        int getNombre(int totalEstudiantes){
            return totalEstudiantes;
        }
        std::string getNombre(std::string codigo){
            return codigo;
        }
};
#endif