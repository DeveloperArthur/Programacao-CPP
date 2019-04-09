#include<iostream>
#include<string.h>
using namespace std;

class Pessoa{
protected:
	char nome[100];
	int idade;
public:
	Pessoa(const char* nome, int idade){
		strcpy(this->nome, nome);
		this->idade = idade;
	}
	char * getNome(){
		return nome;
	}
	int getIdade(){
		return idade;
	}
};

int main(int argc, char *argv[]){
	Pessoa p("Arthur", 20);
	cout << "Nome: " << p.getNome() << endl;
	cout << "Idade: " << p.getIdade() << endl;
}
