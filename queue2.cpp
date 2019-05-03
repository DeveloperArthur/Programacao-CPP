#include<iostream>
#include<queue>
using namespace std;

int main(int argc, char *argv[]){
	priority_queue<int> pq;
	//priority_queue<int, vector<int>, greater<int> > pq; inverte a ordem de prioridade
	pq.push(20);
	pq.push(15);
	pq.push(50);
	
	cout << "elemento do topo: " << pq.top() << endl;
	
	if(pq.empty())
		cout << "fila vazia" << endl;
	else
		cout << "fila nao vazia" << endl;
		
	cout << "mostrando os elementos: " << endl;
	while(!pq.empty()){
		cout << pq.top() << " ";
		pq.pop();
	}
}
