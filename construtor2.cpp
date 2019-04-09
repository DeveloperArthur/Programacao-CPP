#include<iostream>
#include<string.h>
using namespace std;

class Carro{
public:
	int ano;
	
	Carro(){
		ano = 0;
	}
	Carro(int ano){
		this->ano = ano;
	}
};

int main(int argc, char *argv[]){
	Carro carro;
	Carro carro2(2014);
	cout << "ano do carro: " << carro.ano << endl;
	cout << "ano do carro2: " << carro2.ano << endl;
}
