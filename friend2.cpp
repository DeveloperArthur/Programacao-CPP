#include <iostream>
#include <string.h>

using namespace std;

class LinguagemAmiga;

class Linguagem
{
	friend void classeAmiga(Linguagem*);
protected:
	char nome[100];
	LinguagemAmiga* lamiga;

private:
	void mostrarNome()
	{
		cout << "Nome: " << nome << endl;
	}

public:
	void setNome(const char* nome)
	{
		strcpy(this->nome, nome);
	}
	void mostrarNome2()
	{
		mostrarNome();
	}
	void mostrarAmiga();
};

class LinguagemAmiga
{
	friend class Linguagem;

protected:
	void mostrarLinguagemAmiga()
	{
		cout << "ola, linguagem amiga!\n";
	}
};

void classeAmiga(Linguagem* l)
{
	cout << "Classe amiga diz: " << l->nome << endl;
}

void Linguagem::mostrarAmiga()
{
	lamiga->mostrarLinguagemAmiga();
}

int main(int argc, char *argv[])
{
	Linguagem l;

	l.setNome("C++");
	//l.mostrarNome2();
	//classeAmiga(&l);
	l.mostrarAmiga();
	return 0;
}
