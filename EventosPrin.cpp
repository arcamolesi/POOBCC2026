//EventosPrin.cpp
#include <iostream>
using namespace std;
#include "Tipoing.h"
#include "Participantes.h"

int main (){
    Tipoing tp1;
    tp1.imprimir();

    tp1.setId(10);
    tp1.setDescricao("Inteira");
    tp1.setValor(25);
    tp1.imprimir();

    Tipoing tp2(15, "Meia Entrada", 12.5);
    tp2.imprimir();
    cout << "\nO obj tp2 tem descricao igual a " <<
            tp2.getDescricao() << endl;

    Participantes part1;
    part1.setId(30);
    part1.setDescricao("Idoso");
    part1.setValor (10);
    part1.imprimir();

}


