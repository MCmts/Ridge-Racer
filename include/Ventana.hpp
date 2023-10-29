#pragma once

#include <curses.h>
#include <unistd.h>
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <list>

using namespace std;

class Ventana
{
private:
    int x;
    int y;
    bool cerrar;

public:
    Ventana()
    {
        initscr(); // Iniciar pantalla

        // Eliminar cursor de pantalla
        noecho();
        curs_set(FALSE);

        // no bloquear consola
        cbreak();
        timeout(10);
        keypad(stdscr, TRUE);

        // inicializar clase
        getmaxyx(stdscr, y, x);
        cerrar = false;
    }

    void Actualizar(list<Actualizable *> listaActualizables)
    {
        // getch();

        for (auto &&iterator : listaActualizables)
        {
            iterator->Actualizar();
        }

        usleep(41000);
    }

    void Dibujar(list<Dibujo *> listaDibujos)
    {
        clear();
        box(stdscr, '|', '#');
        for (auto &&dibujo : listaDibujos)
        {
            dibujo->Dibujar();
        }

        refresh();
    }

    bool Debocerrar()
    {
        return this->cerrar;
    }

    void Cerrar()
    {
        this->cerrar = true;
    }

    ~Ventana()
    {
        endwin();
    }
};