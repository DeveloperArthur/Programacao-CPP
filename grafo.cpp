// Grafo - Matriz de adjacência

#include <iostream>

using namespace std;

int grafo[5][5] ={
	//a, b, c, d, e
	{0, 0, 1, 0, 0},
	{0, 0, 1, 0, 0},
	{1, 1, 0, 1, 1},
	{0, 0, 1, 0, 1},
	{0, 0, 1, 1, 0}
   //0, 1, 2, 3, 4
};

bool tem_ligacao(int v1, int v2){
	if(grafo[v1][v2])
		return true;
	return false;
}

int main(int argc, char *argv[]){
	cout << tem_ligacao(0, 2) << endl;
	return 0;
}
