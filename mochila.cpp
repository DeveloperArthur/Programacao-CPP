//Problema da Mochila
#include <iostream>
using namespace std;

int mochila(int W, int wt[], int b[], int n){
	int V[n+1][W+1];
	
	for(int w=0; w<=W; w++){
		V[0][w] = 0;
	}
	for(int i=0; i<=n; i++){
		V[i][0] = 0;
	}
	
	for(int i = 1; i<=n; i++){
		for(int w=1; w<=W; w++){
			if(wt[i-1] <= w){
				if((b[i-1]+ V[i-1][w-wt[i-1]]) > V[i-1][w])
					V[i][w] = b[i-1]+ V[i-1][w-wt[i-1]];
				else
					V[i][w] = V[i-1][w];
			}else
				V[i][w] = V[i-1][w];
		}
	}
	
	return V[n][W];
}

int main(int argc, char *argv[]){
	int W = 20;
	int n = 5;
	
	int b[] = {3, 5, 8, 4, 10};
	int wt[] = {2, 4, 5, 3, 9};
	
	int max_valor = mochila(W, wt, b, n);
	
	cout << "Valor maximo: " << max_valor << endl;
}
