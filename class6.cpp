#include<iostream>
using namespace std;

class Conta{
public:
	//atributos
	int num;
	double saldo;
	//metodos
	double depositar(double quant){
		if(quant>0)
			saldo+=quant;
		return saldo;
	}
	double retirar(double quant){
		if(quant>0 && saldo>=quant)
			saldo-=quant;
		return saldo;
	}
	double getSaldo(){
		return saldo;
	}
	int getNumero(){
		return num;
	}
};

void foo(Conta& c){
	c.depositar(50);
}

Conta* novaConta(int numero){
	Conta* c = new Conta;
	c->num = numero;
	c->saldo = 0.0;
	return c;
}

int main(int argc, char *argv[]){
	Conta* pc = novaConta(1111);
	
	cout << "Numero: " << pc->getNumero() << endl;
	cout << "Saldo: " << pc->getSaldo() << endl;
	return 0;
}
