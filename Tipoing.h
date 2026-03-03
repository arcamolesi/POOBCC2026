//Tipoing.h
class  Tipoing {
    protected:  // atributos
       int id;
       string descricao;
       float valor;
    public: // métodos
        //construtor padrão in line.
        Tipoing(): id(0), descricao(""), valor(0.0) {}
        //construtor parametrizado in line
        Tipoing(int id, string desc, float valor):
                id(id), descricao(desc), valor (valor) {}

        //métodos get
        int getId() {return this->id;}
        string getDescricao() {return this->descricao;}
        float getValor() {return this->valor;}

        //métodos set
        void setId(int id) {this->id = id;}
        void setDescricao (string descricao) {this->descricao = descricao;}
        void setValor (float valor) {(valor>0)? this->valor = valor : this->valor=0;}
         //operador ternário da condicional

         //protótipo ou assinatura do método imprimir
        void imprimir();
};

void Tipoing::imprimir(){
   cout << "\nImprimir Tipo de Ingresso\n";
   cout << "ID: " << this->id << endl;
   cout << "Descricao: " << this->descricao << endl;
   cout << "Valor: " << this->valor << endl;
}





