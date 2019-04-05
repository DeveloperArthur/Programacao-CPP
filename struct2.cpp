#include <iostream>
using namespace std;

typedef struct pessoa{
	char pessoa[100];
	int idade;
}t_pessoa;

int main(int argc, char *argv[]){
	t_pessoa pessoas[100];
	t_pessoa* p;
	
	p = &pessoas[0];
	
	pessoas[0].idade = 10;
	pessoas[1].idade = 11;
	pessoas[2].idade = 12;
	
	cout << p->idade << endl;
	cout << (p+1)->idade << endl;
	cout << (p+2)->idade << endl;
}
