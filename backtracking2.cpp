#include <iostream>
 
using namespace std;

void combinacoes(int v[], bool v_bool[], int i, int tam_v)
{
	if(i == tam_v)
	{
		for(int j = 0; j < tam_v; j++)
		{
			if(v_bool[j] == 1)
				cout << v[j] << " ";
		}
		cout << endl;
	}
	else
	{
		v_bool[i] = true;
		combinacoes(v, v_bool, i + 1, tam_v);
		v_bool[i] = false;
		combinacoes(v, v_bool, i + 1, tam_v);
	}
}

int main(int argc, char *argv[])
{
	int v[] = {1, 2, 3};
	int tam_v = sizeof(v) / sizeof(int);
	bool v_bool[tam_v];

	for(int i = 0; i < tam_v; i++)
		v_bool[i] = false;

	combinacoes(v, v_bool, 0, tam_v);

	return 0;
}
