#include <iostream>
#include <vector>
using namespace std;

int num_moedas(vector<int>& moedas, int troco){
	int qte_moedas = 0;
	int tam_moedas = moedas.size();
	
	for(int i=tam_moedas-1; i>=0; i--){
		int aux_moedas = troco / moedas[i];
		troco-=aux_moedas*moedas[i];
		qte_moedas += aux_moedas;
	}
	
	return qte_moedas;
}

int main(int argc, char *argv[]){
	vector<int> moedas;
	int troco=26;
	
	moedas.push_back(1);
	moedas.push_back(2);
	moedas.push_back(5);
	moedas.push_back(10);
	moedas.push_back(20);
	
	cout << "Numero de moedas: " << num_moedas(moedas, troco) << endl;
}
