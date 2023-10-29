#pragma once
#include <Vector.hpp>
#include<Dibujo.hpp>
#include <Actualizable.hpp>

class Carro : public Dibujo, public Actualizable
{
private:
    /* data */
public:
    Carro() :Dibujo("car")
    {
        this ->posicion = Vector();
    }
    Carro (int x, int y):Dibujo ("car")
    {
        this->posicion.DezplazarX(x);
        this->posicion.DezplazarY(y);
    }
    void Actualizar(){
        this ->posicion.DezplazarX(1);
        this ->posicion.DezplazarY(0);
    }

    void Avanzar(){
        this->posicion.DezplazarX(1);
    }
    void CambiarDireccion(){
        this->posicion.CambiarDireccionX();
    }
~Carro()
{}
};
