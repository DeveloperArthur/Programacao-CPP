#include <iostream>
#include <stdlib.h>
using namespace std;

class Vetor{
	private:
		int *vet;
		int max;
	public:
		Vetor(int max=100){
			if(max < 0){
				cerr << "Erro: indice negativo" << endl;
				exit(1);
			}else if(max > 1000000){
				cerr << "Erro: indice estourado" << endl;
				exit(1);
			}
			
			this->max = max;
			vet = (int*)malloc(max*sizeof(int));
		}
		~Vetor(){
			delete [] vet;
		}
		
		bool inserir(int e, int pos){
			if(pos < max && pos >= 0){
				vet[pos] = e;
				return true;
			}
			return false;
		}
		
		int& operator[] (int i){
			if(i < 0 || i >= max){
				cerr << "Acesso invalido\n" << endl;
				exit(1);
			}
			return vet[i];
		}
};

int main(int argc, char *argv[]){
	Vetor v(10);
	
	if(v.inserir(10,0)){
		cout << "elemento inserido\n";
	}else{
		cout << "elemento nao inserido\n";
	}
	if(v.inserir(11,2)){
		cout << "elemento inserido\n";
	}else{
		cout << "elemento nao inserido\n";
	}
	
	if(v.inserir(12,10)){
		cout << "elemento inserido\n";
	}else{
		cout << "elemento nao inserido\n";
	}
	
	cout << "Primeiro elemento: " << v[0] << endl;
	cout << "Segundo elemento: " << v[2] << endl;
	cout << "Trigesimo elemento: " << v[30] << endl;
}
