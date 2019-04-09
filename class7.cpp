#include<iostream>
#include<string.h>
using namespace std;

class Linguagem{
protected:
	char nome[100];
	
public:
	void mostrarNome(){
		cout << "Nome: " << nome << endl;
	}
	void setNome(char nome[]){
		strcpy(this->nome, nome);
	}
};

int main(int argc, char *argv[]){
	Linguagem l;
	
	l.setNome("c++");
	l.mostrarNome();
}
