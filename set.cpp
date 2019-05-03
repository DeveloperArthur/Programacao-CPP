#include<iostream>
#include<set>
using namespace std;

int main(int argc, char *argv[]){
	int vet[] = {10,20,10,30,40};
	set<int> myset(vet, vet+5);
	
	set<int>::iterator it = myset.begin();
	
	cout << "mostrando os elementos" << endl;
	while(it != myset.end()){
		cout << *it << " ";
		it++;
	}
	cout << endl;
	if(myset.empty())
		cout << "conjuto vazio" << endl;
	else
		cout << "conjunto nao vazio" << endl;
		
	//myset.clear();
	
	cout << endl;
	it = myset.begin();
	cout << "mostrando os elementos: " << endl;
	while(it != myset.end()){
		cout << *it << " ";
		it++;
	}
	cout << endl;
	it = myset.find(40);
	if(it == myset.end())
		cout << "\n\nO elemento 40 NAO existe\n";
	else
		cout << "\n\nO elemento 40 existe\n";
	cout << endl;
	cout << "\nTamanho do conjunto: " << myset.size() << endl;
}
