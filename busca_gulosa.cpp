#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Brinquedo{
	public:
		int D, P, div;
		Brinquedo(int D, int P){
			this->D = D;
			this->P = P;
			div = (double)P/D;
		}
};

bool comp(Brinquedo const & x, Brinquedo const & y){
	return x.div > y.div;
}

int main(int argc, char *argv[]){
	int N, T, h = 1;
	while(1){
		vector<Brinquedo> brinquedos;
		cin >> N;
		cin >> T;
		
		if(N==0)
			break;
			
		for(int i=0; i<N; i++){
			int D, P;
			cin >> D;
			cin >> P;
			
			Brinquedo brinquedo(D,P);
			brinquedos.push_back(brinquedo);
		}
		
		sort(brinquedos.begin(), brinquedos.end(), comp);
		
		int pontuacao_total = 0, tempo_total = 0;
		
		int i=0;
		while(i<N){
			int aux_tempo_total = tempo_total + brinquedos[i].D;
			if(aux_tempo_total <= T){
				pontuacao_total += brinquedos[i].P;
				tempo_total = aux_tempo_total;
			}
			else i++;
		}
		
		cout << "Instancia " << h++ << endl;
		cout << pontuacao_total << "\n\n";
	}
	return 0;
}
