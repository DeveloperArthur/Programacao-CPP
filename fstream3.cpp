#include<iostream>
#include<fstream>
using namespace std;

class Pessoa{
	private:
		string nome;
		int idade;
	public:
		string& getNome(){
			return nome;
		}
		
		int getIdade(){
			return idade;
		}
		
		void setNome(string& nome){
			this->nome = nome;
		}
		
		void setIdade(int idade){
			this->idade = idade;
		}
		
		friend ostream& operator<<(ostream& os, const Pessoa& p){
			os << "\n" << p.nome << endl;
			os << "\n" << p.idade << endl;
		}
		
		friend istream& operator>>(istream& is, Pessoa& p){
			is >> p.nome >> p.idade;
			return is;
		}
};

char menu(){
	char resp;
	cout << "Digite 1 para inserir pessoas" << endl;
	cout << "Digite 2 para listar pessoas" << endl;
	cout << "Digite 0 para sair" << endl;
	cout << "opcao: " << endl;
	cin >> resp;
	return resp;
}

int main(int argc, char *argv[]){
	char resp;
	
	while(true){
		resp = menu();
		if(resp == '1'){
			Pessoa pessoa;
			string nome;
			int idade;
			
			ofstream ofs("arquivo.txt", fstream::app);
			
			cout << "Digite o nome da pessoa: " << endl;
			cin >> nome;
			cout << "Digite a idade da pessoa: " << endl;
			cin >> idade;
			cout << endl;
			
			pessoa.setNome(nome);
			pessoa.setIdade(idade);
			
			ofs << pessoa;
			
			ofs.close();
		}else if(resp == '2'){
			Pessoa p;
			ifstream ifs("arquivo.txt");
			
			cout << "Listando pessoas: " << endl;
			if(ifs.good()){
				while(!ifs.eof()){
					ifs >> p;
					cout << "nome: " << p.getNome() << endl;
					cout << endl;
					cout << "idade: " << p.getIdade() << endl;
					cout << endl;
				}
				ifs.close();
			}else{
				cout << "falha ao abrir arquivo" << endl;
			}
		}else if(resp == '0'){
			cout << "Saiu" << endl;
			cout << endl;
			break;
		}else{
			cout << "opcao invalida" << endl;
			cout << endl;
		}
	}
}
