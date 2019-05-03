#include<iostream>
#include<queue>
using namespace std;

int main(int argc, char *argv[]){
	queue<int> fila;
	fila.push(10);
	fila.push(20);
	fila.push(30);
	
	cout << fila.back() << endl;
	
	if(fila.empty()){
		cout << "fila vazia" << endl;
	}else{
		cout << "fila nao vazia" << endl;
	}
	
	cout << "primeiro elemento: " << fila.front() << endl;
	
	cout << "elementos: " << endl;
	while(!fila.empty()){
		int e = fila.front();
		cout << e << endl;
		fila.pop();
	}
	
	fila.push(10);
	fila.push(20);
	fila.push(30);
	
	cout << "tamanho da fila: " << fila.size() << endl;
}
