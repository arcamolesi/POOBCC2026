//Participantes.h

class Participantes: public Tipoing {
    private:
       int id;
       string nome;
       string evento;
    public:
       Participantes();
      // Participantes(int, string, string, int, string, float);

      void imprimir ();
};

Participantes::Participantes(){
    //atributos de participantes
   this->id = 0;  // id de participante
   this->nome = "nome participante";
   this->evento = "";
   //atributos de tipoing
   this->Tipoing::id = 0; // id de tipo ingresso que foi herdado por participante
   this->descricao = "descricao evento";
   this->valor = 0;

}

void Participantes::imprimir(){
   cout << "\nImprimir Participante\n";
   cout << "ID Participante: " << this->id << endl;
   cout << "Nome: " << this->nome << endl;
   cout << "Evento: " << this->evento << endl;
   cout << "ID Tipo Ingresso: " << this->Tipoing::id << endl;
   cout << "Descricao Tipo Ing: " << this->descricao << endl;
   cout << "Valor do Ingresso: " << this->valor << endl;

}

