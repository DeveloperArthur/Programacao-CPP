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

int main(int argc, char *argv[]){
	Pessoa pessoas[2] = {
		{"Arthur", "111111", 20},
		{"teste" , "2222"  , 21},
	};
	cout << pessoas[0].nome << endl;
	cout << pessoas[1].nome << endl;
}
