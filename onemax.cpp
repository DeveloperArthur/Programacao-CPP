//algoritmos geneticos
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;

// parâmetros do algoritmo genético
int tam_genes = 100; // quantidade de genes
int tam_pop = 50; // quantidade de indivíduos da população
int tam_torneio = 20; // tamanho do torneio
int geracoes = 500; // quantidade de gerações
double prob_mut = 0.2; // probabilidade de mutação
double prob_cruz = 0.7; // probabilidade de cruzamento

// população
vector<vector<int> > populacao;

void inicializaPopulacao()
{
	for(int i = 0; i < tam_pop; i++)
	{
		vector<int> individuo;

		for(int j = 0; j < tam_genes; j++)
		{
			int num = rand() % 2; // escolhe um número no intervalo [0,1]
			individuo.push_back(num); // insere no vetor do individuo
		}

		populacao.push_back(individuo); // insere no vetor da populacao
	}
}

void mostrarPopulacao()
{
	for(int i = 0; i < tam_pop; i++)
	{
		for(int j = 0; j < tam_genes; j++)
			cout << populacao[i][j] << " ";
		cout << endl;
	}
}

// retorna o score do indivíduo
int obterPontuacao(vector<int> individuo)
{
	// o score é a soma dos valores dos genes
	int soma = 0;

	for(int i = 0; i < tam_genes; i++)
		soma += individuo[i];
	return soma;
}

// realiza a mutação
void mutacao(vector<int>& individuo)
{
	// escolhe um gene aleatoriamente no intervalo [0, tam_genes - 1]
	int gene = rand() % tam_genes;

	// modifica o valor do gene escolhido
	if(individuo[gene] == 0)
		individuo[gene] = 1;
	else
		individuo[gene] = 0;
}

// realiza o cruzamento
void cruzamento(int indice_pai1, int indice_pai2, vector<int>& filho)
{
	// escolhe um ponto aleatoriamente no intervalo [0, tam_genes - 1]
	int ponto = rand() % tam_genes;

	for(int i = 0; i <= ponto; i++)
		filho.push_back(populacao[indice_pai1][i]);
	for(int i = ponto + 1; i < tam_genes; i++)
		filho.push_back(populacao[indice_pai2][i]);
}

// retorna o índice do melhor indivíduo da população
int obterMelhor()
{
	int indice_melhor = 0;
	int score_melhor = obterPontuacao(populacao[0]);

	for(int i = 1; i < tam_pop; i++)
	{
		int score = obterPontuacao(populacao[i]);
		if(score > score_melhor)
		{
			indice_melhor = i;
			score_melhor = score;
		}
	}

	return indice_melhor;
}

int main(int argc, char *argv[])
{
	srand(time(NULL));

	inicializaPopulacao();
	//mostrarPopulacao();

	for(int i = 0; i < geracoes; i++)
	{
		for(int j = 0; j < tam_torneio; j++)
		{

			// calcula a probabilidade de cruzamento
			double prob = ((double) rand() / ((double)RAND_MAX + 1));

			if(prob < prob_cruz)
			{
				// escolhe dois pais
				int indice_pai1 = rand() % tam_pop;
				int indice_pai2;

				// garante que os índices dos pais não são iguais
				do
				{
					indice_pai2 = rand() % tam_pop;
				}
				while(indice_pai1 == indice_pai2);

				vector<int> filho;

				// aplica o cruzamento de 1 ponto
				cruzamento(indice_pai1, indice_pai2, filho);

				// calcula a probabilidade de mutação
				prob = ((double) rand() / ((double)RAND_MAX + 1));

				if(prob < prob_mut)
					mutacao(filho);

				int score_pai = obterPontuacao(populacao[indice_pai1]);
				int score_filho = obterPontuacao(filho);

				/*
					se a pontuação (score) do filho for melhor do
					que o pai1, então substitui o pai 1 pelo filho
				*/
				if(score_filho > score_pai)
				{
					// faz a cópia dos genes do filho para o pai
					for(int k = 0; k < tam_genes; k++)
						populacao[indice_pai1][k] = filho[k];
				}
			}
		}
		
		cout << "Geracao " << i + 1 << endl;
		cout << "Melhor: ";
		
		int indice_melhor = obterMelhor();
		int score_melhor = obterPontuacao(populacao[indice_melhor]);
		
		for(int j = 0; j < tam_genes; j++)
			cout << populacao[indice_melhor][j] << " ";
		
		cout << "\nPontuacao: " << score_melhor << "\n\n";
		
		// verifica se encontrou a solução ótima global
		if(score_melhor == tam_genes)
			break;
	}

	return 0;
}
