#include<iostream>
#include<list>
using namespace std;

template<class T>
class Fila{
	private:
		list<T> fila;
	public:
		void inserir(const T& e){
			fila.push_back(e);
		}
		
		bool vazia(){
			return fila.empty();
		}
		
		T remover(){
			if(!this->vazia()){
				T e = fila.front();
				fila.pop_front();
				return e;
			}
			throw "Fila vazia";
		}
		
		T frente(){
			if(!this->vazia())
				return fila.front();
			throw "Fila vazia";
		}
		
		T final(){
			if(!this->vazia())
				return fila.back();
			throw "Fila vazia";
		}
		
		int tamanho(){
			return fila.size();
		}
};

int main(int argc, char *argv[]){
	Fila<double> f1;
	cout << "Antes de inserir elementos\n";
	if(f1.vazia())
		cout << "Fila vazia\n";
	else cout << "Fila nao vazia\n";
	
	try{
		double e = f1.remover();
		cout << "Removido o elemento: " << e << endl;
	}catch(const char* msg){
		cerr << "Erro: " << msg << endl;
	}
	
	f1.inserir(5.67);
	f1.inserir(9.23);
	f1.inserir(1.45);
	
	cout << "\nDepois de inserir elementos\n";
	
	if(f1.vazia())
		cout << "Fila vazia\n";
	else cout << "Fila nao vazia\n";
	
	try{
		cout << "Elemento da frente: " << f1.frente() << endl;
	}catch(const char* msg){
		cerr << "Erro: " << msg << endl;
	}
	
	try{
		cout << "Elemento do final: " << f1.final() << endl;
	}catch(const char* msg){
		cerr << "Erro: " << msg << endl;
	}
	
	try{
		double e = f1.remover();
		cout << "Removido o elemento: " << e << endl;
	}catch(const char* msg){
		cerr << "Erro: " << msg << endl;
	}
	
	try{
		cout << "Elemento da frente: " << f1.frente() << endl;
	}catch(const char* msg){
		cerr << "Erro: " << msg << endl;
	}
	
	Fila<string> f2;
	
	f2.inserir("aaa");
	f2.inserir("zzz");
	cout << "\nFila de strings\n";
	try{
		cout << "Elemento da frente: " << f2.frente() << endl;
	}catch(const char* msg){
		cerr << "Erro: " << msg << endl;
	}
	
	try{
		cout << "Elemento do final: " << f2.final() << endl;
	}catch(const char* msg){
		cerr << "Erro: " << msg << endl;
	}
}	

