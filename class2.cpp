#include <iostream>
#include <string.h>
using namespace std;

class Pessoa{
	//atributos
	public:
		char nome[100];
		char cpf[20];
		int idade;
};

int getIdade(Pessoa pessoas[], char nome[]){
	int tam = sizeof(pessoas);
	
	for(int i=0; i<tam; i++){
		if(strcmp(nome, pessoas[i].nome)==0)
			return pessoas[i].idade;
	}
	return -1;
}

int main(int argc, char *argv[]){
	Pessoa pessoas[2] = {
		{"Arthur", "111111", 20},
		{"teste" , "2222"  , 21},
	};
	cout << pessoas[0].nome << endl;
	cout << pessoas[1].nome << endl;
	
	int idade = getIdade(pessoas, "Arthur");
	
	if(idade != -1)
		cout << "Idade do Arthur: " << idade << endl;
	else cout << "Pessoa nao encontrada." << endl;
}
