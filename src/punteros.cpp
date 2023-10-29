#include<Carro.hpp>
#include<iostream>
#include<unistd.h>
using namespace std;

class Demo{
    private:
        int x;
        int y;
};

int main (int argc, char const *argv[])
{

    cout<<"Tamaño int: " <<sizeof(int)<<endl;

    int a =5;
    cout<<"Direccion a : "<<&a<<endl;
    cout<<"Tamaño   a" <<sizeof(int)<<endl;


    Demo b;
    cout<<"Direccion b : "<<&b<<endl;
    cout<<"Tamaño   b" <<sizeof(int)<<endl;

    int * direccion = (int*) malloc(4);
    cout<< "Malloc antes: "<< direccion <<endl;
    direccion += 1;
    cout<< "Malloc Despues: "<< direccion <<endl;
    direccion -= 1;

    *direccion = 5;
    cout<< "Contenido direccion:"<<*direccion<<endl;

    cout<<"Operador New: "<<new Carro()<<endl;

    Carro* car1 = new Carro();
    cout<<"Nuevo Carro "<<car1<<endl;
   
    return 0;
}