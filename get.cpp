#include <iostream>
#define MAX 10
using namespace std;

int main(int argc, char *argv[]){
	char nome[MAX];
	cout << "Digite o seu nome: ";
	cin.get(nome, MAX);
	cout << "Ola " << nome << endl;
}
