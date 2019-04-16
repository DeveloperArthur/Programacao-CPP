#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char *argv[]){
	vector<int> v;
	
	if(v.empty()){
		cout << "vetor vazio\n";
	}else{
		cout << "vetor NAO vazio\n";
	}
	
	v.push_back(10);
	
	if(v.empty()){
		cout << "vetor vazio\n";
	}else{
		cout << "vetor NAO vazio\n";
	}
	return 0;
}
