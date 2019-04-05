#include <iostream>
using namespace std;

struct Pessoa{
	private:
		int idade;
	//construtor
	public:
		Pessoa(int idade){
			this->idade = idade;
		}
	//set
	void setIdade(int idade){
		this->idade = idade;
	}
	//get
	int getIdade(){
		return idade;
	}
};

int main(int argc, char *argv[]){
	Pessoa p(20);
	p.setIdade(20);
	cout << p.getIdade() << endl;
}
