#include <iostream>
using namespace std;

#include "Produto.h"

int main (){
    Produto prod1; //instanciação de objeto

    prod1.ler();
    prod1.imprimir(); //invocação do método imprimir()

    prod1.aumento();
    prod1.imprimir();

    prod1.aumento();
    prod1.imprimir();


    //Produto prod2;
    //prod2.ler();
    //prod2.imprimir();

}





