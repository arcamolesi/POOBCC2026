//Equipe.cpp
#include <iostream>
using namespace std;

#ifndef CARGO_H
   #include "Cargo.h"
#endif // CARGO_H

#ifndef FUNCIONARIO_H
   #include "Func.h"
#endif // FUNCIONARIO_H

#ifndef FUNCOES_H
   #include "Funcoes.h"
#endif // FUNCOES_H

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

 //   f1.ler();
 //   f1.imprimir();

/*
    cout << "\nLer Funcionario\n";
    int idFunc, idCargo;
    string nome, cargo;
    float salario;

    cout << "ID Funcionario: ";
    cin >> idFunc;

    cout << "Nome: ";
    cin.ignore();
    getline(cin, nome);

    cout << "ID Cargo: ";
    cin >> idCargo;

    cout << "Cargo: ";
    cin.ignore();
    getline(cin, cargo);

    cout << "Salario: ";
    cin >> salario;

    f1.setId(idFunc);
    f1.setNome(nome);
    f1.Cargo::setId(idCargo);
    f1.setCargo(cargo);
    f1.setSalario(salario);

    f1.imprimir
   */

   lerFuncionario(f1);
   //f1.imprimir();
   imprimirFuncionario(f1);

   Funcionario f3;
   lerFuncionario(f3);
   imprimirFuncionario(f3);



}


