#include<iostream>
using namespace std;

int fat(int n){
	
	if(n<0){
		throw "Numero negativo!";
	}
	
	if(n == 0 || n == 1){
		return 1;
	}
	return n*fat(n-1);
}

int main(int argc, char *argv[]){
	try{
		cout << "Fatorial de 5: " << fat(5) << endl;
		cout << "Fatorial de -5: " << fat(-5) << endl;
	}catch(const char* e){
		cerr << "Erro: " << e << endl;
	}catch(...){
		cerr << "Erro inesperado";
	}
	return 0;
}
