class Produto{
   //atributos
   public:
       int id;
       string descricao;
       float quantidade;
       float valor;

   //métodos
   void ler(){
      cout << "\nLer Dados de Produto\n";
      cout << "Informe ID: ";
      cin >> id;
      cout << "Informe Descricao: ";
      cin >> descricao;
      cout << "Informe Quantidade: ";
      cin >> quantidade;
      cout << "Informe Valor: ";
      cin >> valor;
   }

   void imprimir(){
      cout << "\nImprimir Produto\n" ;
      cout << "ID: " << id << endl;
      cout << "Descricao: " << descricao << endl;
      cout << "Quantidade: " << quantidade << endl;
      cout << "Valor: " << valor << endl;
   }

   void aumento(){
      valor = valor + (valor*20/100);
   }

};






