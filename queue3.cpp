#include<iostream>
#include<queue>
using namespace std;

class Pessoa{
	private:
		string nome;
		int idade;
	public:
		Pessoa(string nome, int idade){
			this->nome = nome;
			this->idade = idade;
		}
		
		string getNome(){
			return nome;
		}
		
		int getIdade(){
			return idade;
		}	
};

struct CompIdade{
	bool operator()(Pessoa& p1, Pessoa& p2){
		return p1.getIdade() < p2.getIdade();
	}
};

int main(int argc, char *argv[]){
	priority_queue<Pessoa, vector<Pessoa>, CompIdade> pq;
	Pessoa p1("Joao", 40), p2("maria", 55), p3("pedro", 22);
	pq.push(p1);
	pq.push(p2);
	pq.push(p3);
	
	Pessoa pessoa = pq.top();
	
	cout << "nome: " << pessoa.getNome() << endl;
	cout << "idade: " << pessoa.getIdade() << endl;
}
