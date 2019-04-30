#include<iostream>
#include<string.h>
using namespace std;

typedef struct Pessoa{
	struct Carro{
		double preco;
	};
	
	struct Casa{
		double preco;
	};
	
	struct Carro carro;
	struct Casa casa;
}t_pessoa;

int main(int argc, char *argv[]){
	t_pessoa pessoa;
	
	pessoa.carro.preco = 25000;
	pessoa.casa.preco = 200000;
	
	cout << "Preco do carro: " << pessoa.carro.preco << endl;
	cout << "Preco da casa: " << pessoa.casa.preco << endl;
}
