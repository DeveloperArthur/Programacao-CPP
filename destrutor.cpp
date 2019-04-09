#include<iostream>
#include<string.h>
using namespace std;

class Pessoa{
protected:
	char nome[100];
	int idade;
	int* parentes;
	double* filhos;
public:
	Pessoa(const char* nome, int idade){
		strcpy(this->nome, nome);
		this->idade = idade;
		parentes = new int[100];
		cout << "Entrou no construtor:  " << nome << endl;
	}
	char * getNome(){
		return nome;
	}
	int getIdade(){
		return idade;
	}
	~Pessoa(){
		cout << "Entrou no destrutor: " << nome << endl;
		delete[] parentes;
	}
};

int main(int argc, char *argv[]){
	Pessoa p[3] = {
		{"arthur", 30}, {"ilza", 1}, {"raul", 2},
	};
	//cout << "Nome: " << p.getNome() << endl;
	//cout << "Idade: " << p.getIdade() << endl;
}
