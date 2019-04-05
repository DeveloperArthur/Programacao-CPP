#include <iostream>
#include <string.h>
using namespace std;

typedef struct pessoa {
	char nome[100];
	int idade;
}t_pessoa;


int main(int argc, char *argv[]){
	t_pessoa p[5];
	
	strcpy(p[0].nome, "Arthur");
	p[0].idade = 20;
	
	strcpy(p[1].nome, "Gabriela");
	p[1].idade = 17;
	
	strcpy(p[2].nome, "Ilza");
	p[2].idade = 40;
	
	strcpy(p[3].nome, "Raul");
	p[3].idade = 45;
	
	strcpy(p[4].nome, "Wellingthon");
	p[4].idade = 15 ;
	
	for(int i=0; i<5; i++){
		cout << "Nome: " << p[i].nome << endl;
		cout << "Idade: " << p[i].idade << endl;
	}
	
}
