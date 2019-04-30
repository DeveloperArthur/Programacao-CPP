#include<iostream>
#include<list>
using namespace std;

bool par(const int& n){
	return (n%2==0);
}

bool comparar_tamanho(const string& s1, const string& s2){
	if(s1.length()<s2.length())
		return true;
	return false;
}

int main(int argc, char *argv[]){
	list<int> l1; //lista de inteiros vazia
	list<int> l2(3, 10); //3 inteiros com valor 10
	list<int>::iterator it;
	
	l1.push_back(10); //10
	l1.push_front(20); //20, 10
	l1.push_back(30); //20, 10, 30
	
	cout << "Mostrando os elementos de l1:\n";
	for(it = l1.begin(); it != l1.end(); it++)
		cout << *it << endl;
		
	cout << "Mostrando os elementos de l2:\n";
	for(it = l2.begin(); it != l2.end(); it++)
		cout << *it << endl;
		
	//acessando primeiro e ultimo elemento de l1
	cout << "\nPrimeiro elemento de l1: " << l1.front();
	cout << "\nUltimo elemento de l1: " << l1.back() << endl;
	
	cout << "\nTamanho de l1: " << l1.size() << endl;
	
	//removendo o primeiro elemento de l1
	l1.pop_front();
	//removendo o ultimo elemento de l1
	l1.pop_back();
	
	cout << "Mostrando os elementos de l1:\n";
	for(it = l1.begin(); it != l1.end(); it++)
		cout << *it << endl;
		
	//removendo todos os elementos de l2
	while(!l2.empty())
		l2.pop_front();
	
	cout << "Mostrando os elementos de l2:\n";
	for(it = l2.begin(); it != l2.end(); it++)
		cout << *it << endl;
		
	//atribuindo elementos a l2
	int vet[] = {1,2,3,4};
	l2.assign(vet, vet+4);
	cout << "Mostrando os elementos de l2:\n";
	for(it = l2.begin(); it != l2.end(); it++)
		cout << *it << endl;
	
	//inserindo um elemento em l2
	l2.insert(l2.begin(), 100);
	cout << "Mostrando os elementos de l2:\n";
	for(it = l2.begin(); it != l2.end(); it++)
		cout << *it << endl;
		
	it = l2.begin();
	it++; //aponta para o segundo
	l2.insert(it, 200);
	cout << "Mostrando os elementos de l2:\n";
	for(it = l2.begin(); it != l2.end(); it++)
		cout << *it << endl;
		
	//inserindo duas vezes o valor 50 na primeira posicao
	l2.insert(l2.begin(), 2, 50);
	cout << "Mostrando os elementos de l2:\n";
	for(it = l2.begin(); it != l2.end(); it++)
		cout << *it << endl;
		
	//apagar os 2 primeiros numeros
	list<int>::iterator it2 = l2.begin();
	it2++;
	it2++;
	l2.erase(l2.begin(), it2);
	cout << "Mostrando os elementos de l2:\n";
	for(it = l2.begin(); it != l2.end(); it++)
		cout << *it << endl;
		
	//remover todos os elementos
	l2.clear();
	cout << "\nTamanho de l2 " << l2.size() << endl;
	
	//transferir elementos de uma lista pra outra
	list<int> lista1(2,10), lista2(2,20);
	it = lista1.begin();
	lista1.splice(it, lista2);
	cout << "Elementos da lista1: \n";
	cout << "Mostrando os elementos de l2:\n";
	for(it = lista1.begin(); it != lista1.end(); it++)
		cout << *it << endl;
	cout << "\nTamanho de lista2: " << l2.size() << endl;
	
	//remover todos os elementos iguais a um valor
	lista1.remove(20);
	for(it = lista1.begin(); it != lista1.end(); it++)
		cout << *it << endl;
		
	//remove se
	int vet2[] = {6,8,10,5,20,21};
	list<int> lista3(vet2, vet2+6);
	cout << "\nElementos de lista3 antes da remocao:\n";
	for(it = lista3.begin(); it != lista3.end(); it++)
		cout << *it << endl;
	
	lista3.remove_if(par);
	
	cout << "\nElementos de lista3 antes da remocao:\n";
	for(it = lista3.begin(); it != lista3.end(); it++)
		cout << *it << endl;
		
	int vet3[] = {17, 60, 5, 30, 50};
	list<int> lista4(vet3, vet3+5);
	lista4.sort();
	cout << "\nElementos de lista4 ordenados:\n";
	for(it = lista4.begin(); it != lista4.end(); it++)
		cout << *it << endl;
		
	//ordenando strings
	list<string> lista5;
	list<string>::iterator it5;
	lista5.push_back("python");
	lista5.push_back("c++");
	lista5.push_back("ruby");
	lista5.push_back("haskell");
	lista5.sort();
	cout << "\nElementos de lista5 ordenados:\n";
	for(it5 = lista5.begin(); it5 != lista5.end(); it5++)
		cout << *it5 << endl;
	
	//ordenando usando algum criteirio
	//exemplo: pelo tamanho da string
	lista5.sort(comparar_tamanho);
	
	cout << "\nElementos de lista5 ordenados:\n";
	for(it5 = lista5.begin(); it5 != lista5.end(); it5++)
		cout << *it5 << " - tamanho: " << (*it5).length() << endl;
		
}
