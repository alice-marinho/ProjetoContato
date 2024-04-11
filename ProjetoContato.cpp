#include <iostream>



using namespace std;



// Classe Data

class Data {

private:

  int dia;

  int mes;

  int ano;



public:

  Data() {}

  Data(int dia, int mes, int ano) {

    this->dia = dia;

    this->mes = mes;

    this->ano = ano;

  }



  int getDia() const { return dia; }

  void setDia(int dia) { this->dia = dia; }



  int getMes() const { return mes; }

  void setMes(int mes) { this->mes = mes; }



  int getAno() const { return ano; }

  void setAno(int ano) { this->ano = ano; }



  // Função para calcular a idade

  int calcularIdade(int anoAtual) const {

    if (anoAtual < ano) {

      return -1; // Data inválida

    }



    int idade = anoAtual - ano;



    if (mes > 6) {

      idade++;

    } else if (mes == 6 && dia > diaAtual) {

      idade++;

    }



    return idade;

  }



  // Sobrecarga do operador de inserção para formatação de saída

  friend ostream& operator<<(ostream& os, const Data& data) {

    os << data.dia << "/" << data.mes << "/" << data.ano;

    return os;

  }

};



// Classe Contato

class Contato {

private:

  string email;

  string nome;

  string telefone;

  Data dtnasc;



public:

  Contato() {}

  Contato(string email, string nome, string telefone, Data dtnasc) {

    this->email = email;

    this->nome = nome;

    this->telefone = telefone;

    this->dtnasc = dtnasc;

  }



  string getEmail() const { return email; }

  void setEmail(string email) { this->email = email; }



  string getNome() const { return nome; }

  void setNome(string nome) { this->nome = nome; }



  string getTelefone() const { return telefone; }

  void setTelefone(string telefone) { this->telefone = telefone; }



  Data getDtnasc() const { return dtnasc; }

  void setDtnasc(Data dtnasc) { this->dtnasc = dtnasc; }



  // Função para calcular a idade

  int calcularIdade() const {

    return dtnasc.calcularIdade(2024); // Assumindo 2024 como ano atual

  }



  // Sobrecarga do operador de inserção para formatação de saída

  friend ostream& operator<<(ostream& os, const Contato& contato) {

    os << "Nome: " << contato.nome << endl;

    os << "Email: " << contato.email << endl;

    os << "Telefone: " << contato.telefone << endl;

    os << "Data de Nascimento: " << contato.dtnasc << endl;

    os << "Idade: " << contato.calcularIdade() << " anos" << endl;

    return os;

  }

};



// Função principal

int main() {

  // Criando um vetor de 5 contatos

  Contato contatos[5];

  // Cadastrando os contatos

  contatos[0] = Contato("joaosilva@email.com", "João Silva", "(11) 9999-8888",

                       Data(10, 5, 1980));

  contatos[1] = Contato("mariag

omes@email.com", "Maria Gomes", "(12) 3333-2222",

                       Data(2, 2, 1990));

  contatos[2]

}
