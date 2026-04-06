//Func.h
#include <iostream>
using namespace std;

#ifndef CARGO_H
   #include "Cargo.h"
#endif // CARGO_H

#ifndef FUNCIONARIO_H
   #define FUNCIONARIO_H
#endif // FUNCIONARIO_H

class Funcionario: public Cargo{
  private:
      int id;
      string nome;
      float salario;

  public:
      Funcionario(): id(0), nome(""), salario(0),Cargo() {}
      Funcionario(int id, string nome, float sal, Cargo cargo):
         id(id), nome(nome), salario(sal), Cargo(cargo) {}

      int getId() {return this->id;}
      string getNome() {return this->nome;}
      float getSalario() {return this->salario;}

      void setId(int id) {this->id = id;}
      void setNome(string nome) {this->nome = nome;}
      void setSalario(float sal) {this->salario = sal;}

      //void aumentoPadrao()
      void aumento() {this->salario = this->salario + (this->salario*20/100);}

     //void aumentoPorPercentual(int perc)
      void aumento(int perc)
            {this->salario = this->salario + (this->salario*perc/100);}

      //void aumentoPorValor(float valor)
      void aumento(float val)
            {this->salario = salario + val;}


     void imprimir(){
       cout << "\nImprimir Funcionario\n";
       cout << "ID Funcionario: "  << this->id  << endl;
       cout << "Nome: " << this->nome << endl;
       cout << "Cargo: " << Cargo::id << " - " << Cargo::cargo << endl;
       cout << "Salario: " << this->salario << endl;
     }

     void ler();

};

void Funcionario::ler(){
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

    setId(idFunc);
    setNome(nome);
    Cargo::setId(idCargo);
    setCargo(cargo);
    setSalario(salario);
}
