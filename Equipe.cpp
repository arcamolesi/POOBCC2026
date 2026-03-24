//Equipe.cpp
#include <iostream>
using namespace std;
#include "Cargo.h"
#include "Func.h"

int main () {
    Cargo c1;
    c1.imprimir();

    Cargo c2(2, "Gerente");
    c2.imprimir();

    cout << "\nImpressao de Funcionarios\n";
    Funcionario f1;
    f1.imprimir();

    Funcionario f2(3, "Begosso", 15000, Cargo(5, "Diretor TI"));
    f2.imprimir();

    f2.aumento();
    f2.imprimir();

    f2.aumento(50);
    f2.imprimir();

    f2.aumento((float)3000);
    f2.imprimir();


}
