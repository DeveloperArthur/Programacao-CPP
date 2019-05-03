#include<iostream>
#include<stack>
using namespace std;

int main(int argc, char *argv[]){
	stack<int> pilha;
	pilha.push(10);
	pilha.push(20);
	pilha.push(30);
	pilha.push(40);
	cout << "tamanho da pilha " << pilha.size() << endl;
	while(!pilha.empty()){
		int e = pilha.top();
		cout << e << " ";
		pilha.pop();
	}
}
