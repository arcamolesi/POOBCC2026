//Viagem.h
class Viagem{
  private: //atributos
    int id;
    string descricao;
    int tpComb; // 1-Gas, 2-Diesel, 3-Etanol
    float kmSaida;
    float kmChegada;
  public: //métodos
    Viagem(); // prototipo do construtor
    //prototipo de um construtor parametrizado para Viagem
    Viagem(int, string, int, float, float);
    Viagem(int, string, int, float);

    //métodos get

    //métodos set
    void setKmChegada(float chegada){
       this->kmChegada = chegada;
    }

    void imprimir();

};


Viagem::Viagem(){ //Viagem padrão
    this->id = 0;
    this->descricao = "Viagem padrao";
    this->tpComb = 0;
    this->kmSaida = 0;
    this->kmChegada = 0;
}

// construtor parametrizado com 5 parametros
Viagem::Viagem(int id, string desc, int tipo, float saida, float chegada){
    this->id = id;
    this->descricao = desc;
    this->tpComb = tipo;
    this->kmSaida = saida;
    this->kmChegada = chegada;
}

// construtor parametrizado com 4 parametros
Viagem::Viagem(int id, string desc, int tipo, float saida){
    this->id = id;
    this->descricao = desc;
    this->tpComb = tipo;
    this->kmSaida = saida;
    this->kmChegada = 0;
}


void Viagem::imprimir(){
  cout << "\nImprimir viagem\n";
  cout << "ID: " << this->id << endl;
  cout << "Descricao: " << this->descricao << endl;
  cout << "Tipo Combustivel: " << this->tpComb << endl;
  cout << "Km de Saida: " << this->kmSaida << endl;
  cout << "Km de Chegada: " << this-> kmChegada << endl;
}

