
#include <string>
#include <iostream>
#include <list>

class Resource{
    int value;
    public:
        Resource(){
            value = 0;
        }
        void reset(){
            value = 0;
        }
        int getValue(){
            return value;
        }
        void setValue(int value){
            this->value =value;
        }
};

/* Tenga en cuenta que esta clase es un singleton. */

class ObjectPool{
    private:
        std::list<Resource*> resources;
        static ObjectPool* instance;

    public:
        static ObjectPool* getInstance(){
            if (instance == 0)
                instance = new ObjectPool;
            return instance;
        }
    
        Resource* getResource(){
            if (resources.empty()){ //comprobamos si esta vacia o no el vector
                std::cout << "Creando uno nuevo" << std::endl;
                return new Resource;      // si esta vacia, crea un nuevo recurso
            }
            else{
                std::cout << "Reusando uno existente" << std::endl;
                Resource* resource = resources.front();  //front devuelve una referencia al primer elemento del vector
                resources.pop_front();                   //elimina el primer elemento del contenedor del vector
                return resource;
            }
        }
        void returnResource(Resource* object){
            object->reset();
            resources.push_back(object); // devolvemos el objeto al pool
        }
};

ObjectPool* ObjectPool::instance = 0;

int main()
{
    ObjectPool* pool = ObjectPool::getInstance();
    Resource* one;
    Resource* two;

    //Se crearán recursos.
    one = pool->getResource();
    one->setValue(10);
    std::cout << "one = " << one->getValue() << " [" << one << "]" << std::endl;

    two = pool->getResource();
    two->setValue(20);
    std::cout << "two = " << two->getValue() << " [" << two << "]" << std::endl;

    pool->returnResource(one);
    pool->returnResource(two);

    /* Los recursos se reutilizarán.
     * Observe que el valor de ambos recursos se restableció a cero.
     */
    one = pool->getResource();
    
    std::cout << "one = " << one->getValue() << " [" << one << "]" << std::endl;

    two = pool->getResource();
    std::cout << "two = " << two->getValue() << " [" << two << "]" << std::endl;
   
    return 0;
}