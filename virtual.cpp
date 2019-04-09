#include<iostream>
#include<string.h>
using namespace std;

class ClasseMae{
public:
	virtual void mostrarMensagem(){
		cout << "Ola sou a classe mae" << endl;
	}
};

class ClasseFilha : public ClasseMae{
public:
	virtual void mostrarMensagem(){
		cout << "Ola sou a classe filha" << endl;
	}
};

void foo(ClasseMae* p){
	p->mostrarMensagem();
}

int main(int argc, char *argv[]){
	ClasseMae mae;
	ClasseFilha filha;
	
	foo(&mae);
	foo(&filha);
}
