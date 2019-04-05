#include <iostream>
#include <string.h>
#define MAX 3
using namespace std;

class Carro{
	public:
		char nome[100];
		char cor[20];
		char placa[20];
		double preco;
};

void ordena(Carro carros[], int tam){
	Carro aux;
	for(int i=tam; i>= 0; i--){
		for(int j=1; j<=i; j++){
			if(strcmp(carros[j-1].nome, carros[j].nome)==1){
				aux = carros[j-1];
				carros[j-1]=carros[j];
				carros[j]=aux;
			}
		}
	}
}

int main(int argc, char *argv[]){
	Carro carros[MAX];
	int i = 0;
	
	while(true){
		char resp;
		cout << "Digite o nome do carro: ";
		cin >> carros[i].nome;
		cout << "digite o preco: ";
		cin >> carros[i].preco;
		cout << "voce deseja continuar?<S><N> ";
		cin >> resp;
		if(resp!='S'){
			break;
		}
		cout << endl;
		i++;
	}
	
	for(int j=0; j<=i; j++){
		cout << "Nome do carro: " << carros[j].nome << endl;
		cout << "Preco> R$" << carros[j].preco << endl;
	}
	
	ordena(carros, i);
	cout << endl;
	for(int j=0; j<=i; j++){
		cout << "Nome do carro ordenado: " << carros[j].nome << endl;
		cout << "Preco ordenado R$" << carros[j].preco << endl;
	}
}
