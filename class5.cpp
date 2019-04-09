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
};

int main(int argc, char *argv[]){
	Conta c;
	Conta* pc = &c;
	pc->num = 1;
	pc->saldo = 100.75;
	
	cout << "Saldo: " << c.saldo << endl;
	cout << "Saldo depois do deposito: " << pc->depositar(100) << endl;
	cout << "Saldo depois do saque: " << pc->retirar(50) << endl;
	return 0;
	
	
}
