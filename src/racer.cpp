#include <Actualizable.hpp>
#include <list>
#include <iostream>
#include<string.h>
#include<curses.h>
#include <Ventana.hpp>
#include<Carro.hpp>
using namespace std;

int main (int argc, char const *argv[])
{
    Carro* car1 = new Carro(0,0);

    Ventana* ventana = new Ventana();

    list<Dibujo*> dibujos;
    dibujos.push_back(car1);

    list<Actualizable*> actualizables;
    actualizables.push_back(car1);

     while (!ventana-> Debocerrar())
    {
        int key= getch();
        if (key == 'a'|| key ==KEY_LEFT){
            car1->Avanzar();
        }

        if (key == 'd'|| key ==KEY_RIGHT) {
            car1->CambiarDireccion();
        }
        
        ventana->Dibujar(dibujos);
       //ventana->Actualizar(actualizables);   
    };

    return 0;
}