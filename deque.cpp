#include <iostream>
#include <deque>
using namespace std;

int main(int argc, char *argv[]){
	deque<int> fila;
	
	cout << "Antes de inserir os elementos: ";
	if(fila.empty()){
		cout << "Fila vazia\n";
	}else{
		cout << "Fila nao vazia\n";
	}
	
	fila.push_back(10);
	fila.push_back(20);
	fila.push_front(30);
	
	cout << "Depois de inserir os elementos: ";
	if(fila.empty()){
		cout << "Fila vazia\n";
	}else{
		cout << "Fila nao vazia\n";
	}
	
	deque<int>::iterator it = fila.begin();
	while(it != fila.end()){
		cout << *it++ << " ";
	}
	cout << endl;
	
	fila.clear();
	cout << "limpando a fila" << endl;
	if(fila.empty()){
		cout << "Fila vazia\n";
	}else{
		cout << "Fila nao vazia\n";
	}
}
