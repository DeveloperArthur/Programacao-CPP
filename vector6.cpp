#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char *argv[]){
	vector<int> v;
	
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	
	while(!v.empty()){
		v.pop_back();
	}
	
	if(v.empty()){
		cout << "vetor vazio\n";
	}else{
		cout << "vetor NAO vazio\n";
	}
}
