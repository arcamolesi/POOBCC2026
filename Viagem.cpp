//Viagem.cpp
#include <iostream>
using namespace std;
#include "Viagem.h"

int main(){
   Viagem v1;  //instanciacao objeto v1
   v1.imprimir(); //invocacao método imprimir()

   Viagem v2 (10, "Assis/SP", 3, 10568.3,11256.9);
   v2.imprimir();

   Viagem v3 (12, "Assis/Bauru", 2, 45327.6 );
   v3.imprimir();

   v3.setKmChegada(45510);
   v3.imprimir();
}
