#include <Actualizable.hpp>
#include <list>
#include <iostream>
#include <string.h>
#include <curses.h>
#include <Ventana.hpp>
#include <Carro.hpp>

using namespace std;

int main(int argc, char const *argv[])
{

    Ventana *ventana = new Ventana();
    Dibujo *pantallaInicio = new Dibujo("Pantalla_inicio");

     ventana->MostrarPantallaInicio(pantallaInicio);

    Carro *car1 = new Carro(0, 0);

    list<Dibujo *> dibujos;
    dibujos.push_back(car1);

    list<Actualizable *> actualizables;
    actualizables.push_back(car1);

    int velocidad = 4;


    while (!ventana->Debocerrar())
    {
        int key = getch();
        if (key == 'a' || key == KEY_LEFT)
        {
            car1->CambiarDireccionIzquierda();
        }

        if (key == 'd' || key == KEY_RIGHT)
        {
            car1->CambiarDireccionDerecha();
        }
          car1->Mover(velocidad);

        ventana->Dibujar(dibujos);
        ventana->Actualizar(actualizables);
    };

    return 0;
}