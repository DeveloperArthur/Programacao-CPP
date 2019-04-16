#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char *argv[]){
	vector<int> v(3);
	
	vector<int>::reverse_iterator rit;
	int i=0;
	for(rit = v.rbegin(); rit != v.rend(); rit++){
		*rit = ++i;
	}
	
	vector<int>::iterator it;
	for(it = v.begin(); it != v.end(); it++){
		cout << *it << endl;
	}
	return 0;
}
