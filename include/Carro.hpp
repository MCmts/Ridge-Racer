#pragma once
#include <Vector.hpp>
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Carro : public Dibujo, public Actualizable
{
private:
    int direccion_x; 
    int direccion_y;
public:
    Carro() : Dibujo("car")
    {
        this->posicion = Vector();
        this->direccion_x = 1; 
        this->direccion_y = 0;
    }
    Carro(int x, int y) : Dibujo("car")
    {
        this->posicion.DezplazarX(x);
        this->posicion.DezplazarY(y);
    }
    void Actualizar()
    {
        this->posicion.DezplazarX(1);
        this->posicion.DezplazarY(0);
    }

     void CambiarDireccionIzquierda()
    {
        this->direccion_x = -1;  // Mueve hacia la izquierda restando a la coordenada X
        this->direccion_y = 0;
    }

    void CambiarDireccionDerecha()
    {
        this->direccion_x = 1;
        this->direccion_y = 0;
    } 
    void Mover(int velocidad)
    {
       this->posicion.DezplazarX(velocidad * this->direccion_x);
        this->posicion.DezplazarY(velocidad * this->direccion_y);
    }

    void Avanzar()
    {
        this->posicion.DezplazarX(1);
    }
    void CambiarDireccion()
    {
        this->posicion.CambiarDireccionX();
    }
    ~Carro()
    {
    }
};
