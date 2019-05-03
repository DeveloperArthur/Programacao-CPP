#include<iostream>
#include<map>
using namespace std;

int main(int argc, char *argv[]){
	map<int, string> mapa;
	mapa[1] = "joao";
	mapa[2] = "maria";
	mapa[3] = "pedro";
	
	mapa.at(1) = "carol";
	//muda o elemento 1 pra carol
	
	if(mapa.empty()){
		cout << "Mapa vazio\n" << endl;
	}else{
		cout << "mapa nao vazio\n" << endl;
	}
	
	if(mapa.count(1) > 0){
		cout << "1 eh elemento do mapa" << endl;
	}else{
		cout << "1 nao eh elemento do mapa" << endl;
	}
	
	map<int, string>::iterator it;
	for(it = mapa.begin(); it != mapa.end(); it++){
		cout << "A chave " << it->first << "=>" << it->second << endl;
	}
	
	it = mapa.find(2);
	mapa.erase(it);
	
	cout << endl;
	
	for(it = mapa.begin(); it != mapa.end(); it++){
		cout << "A chave " << it->first << "=>" << it->second << endl;
	}
	
	if(mapa.find(2) == mapa.end())
		cout << "Chave 2 nao existe\n";
	else
		cout << "chave 2 existe\n";
		
	it = mapa.begin();
	mapa.insert(pair<int, string>(2, "maria"));
	
	cout << endl;
	
	for(it = mapa.begin(); it != mapa.end(); it++){
		cout << "A chave " << it->first << "=>" << it->second << endl;
	}
	
	multimap<int, string> mm;
	mm.insert(pair<int, string>(1, "python 2"));
	mm.insert(pair<int, string>(2, "python 3"));
	mm.insert(pair<int, string>(3, "c"));
	mm.insert(pair<int, string>(4, "c++"));
	mm.insert(pair<int, string>(5, "ruby"));
	
	cout << endl;
	
	multimap<int, string>::iterator it_low, it_up, it2;
	
	it_low = mm.lower_bound(2);
	it_up = mm.upper_bound(4);
	
	for(it2 = it_low; it2!=it_up; ++it2)
		cout << it2->first << "=>" << it2->second << endl;
}
