#include <iostream>
#include <string>

using namespace std; 

class Banco {
private:
string nome;
int cpf;
int numero_conta;
float saldo;

public:

  Banco(){
    nome = "";
    cpf = 0;
    numero_conta = 0;
    saldo = 0.0;
  }

  Banco(string n, int c, int num, float sal){
    nome = n;
    cpf = c;
    numero_conta = num;
    saldo = sal;
  }

  void sacar(){
    float sacar = 0;
    if (saldo > 0){
      cout << "Digite o valor que deseja sacar -->  ";
      cin >> sacar;
      
      if (sacar <= saldo && sacar > 0){
        cout << "Valor de [" << sacar << "] retirado com sucesso! " << endl;
        saldo = saldo - sacar;
        cout << "Saldo atual: " << saldo << endl;
        
      }  else cout << "Valor insuficiente!" << endl;
      
    } else {
      cout << "Valor insuficiente";
      cout << "Saldo atual: " << saldo << endl;
    }
  }

  void depositar(){
    float depositar = 0;
    cout << "Digite o valor que deseja depositar -->  ";
    cin >> depositar;
    cout << "Valor de [" << depositar << "] depositado com sucesso! " << endl;
    saldo = saldo + depositar;
    cout << "Saldo atual: " << saldo << endl;    
  }

  void emprestimo(){
    float emprestimo = 0;
    cout << "Digite o valor que deseja emprestar -->  ";
    cin >> emprestimo;
    if (emprestimo >= 10000) cout << "Valor alto demais!" << endl;
    else {
      cout << "Valor de [" << emprestimo << "] emprestado com sucesso! " << endl;
      saldo = saldo + emprestimo;
      cout << "Saldo atual: " << saldo << endl;    
    }
  }

};

int main(){
  string nome;
  int cpf, num_conta, op, i = 0;
  float saldo;
  

  cout << "Nome -->  ";
  getline(cin, nome);
  
  cout << "Cpf -->  ";
  cin >> cpf;
  
  cout << "Numero da conta -->  ";
  cin >> num_conta;
  
  cout << "Saldo -->  ";
  cin >> saldo;

  Banco cliente(nome, cpf, num_conta, saldo);

  cout << endl << "-------------------------" << endl << "Escolha uma opcao:" << endl;
  cout << "[1] Sacar" << endl << "[2] Depositar" << endl << "[3] Emprestimo" << endl << "[4] Sair" << endl;
  

  while(i == 0){    
    cout << "Opcao -->  ";
    cin >> op;
    switch(op){
      case 1:
        cliente.sacar();
        cout << endl;
        break;
      case 2:
        cliente.depositar();
        cout << endl;
        break;
      case 3:
        cliente.emprestimo();
        cout << endl;
        break;
      case 4:
        cout << endl << "--- FIM ---";
        i = 1;
        break;
      default:
        cout << "Opcao invalida!" << endl;
    }
    
  }
}