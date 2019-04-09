#include<iostream>
using namespace std;

class Pilha{
private:
	int * vet;
	int max_tam;
	int topo;
public:
	Pilha(){
		vet = new int[100];
		max_tam = 99;
		topo = -1;
	}
	~Pilha(){
		delete[] vet;
	}
	void empilhar(int e){
		if(topo == max_tam)
			cout << "Pilha cheia\n" << endl;
		else
			vet[++topo] = e;
	}
	void desempilhar(){
		if(topo == -1)
			cout << "Pilha vazia\n" << endl;
		else
			topo--;
	}
	int getTopo(){
		if(topo != -1)
			return vet[topo];
		return -1;
	}
	int vazia(){
		return(topo==-1);
	}
};

int main(int argc, char *argv[]){
	Pilha p;
	p.empilhar(10);
	p.empilhar(11);
	p.empilhar(12);
	p.desempilhar();
	cout << "\nPilha vazia: " << p.vazia() << endl;
	cout << "\nTopo: " << p.getTopo();
	
	p.desempilhar();
}
