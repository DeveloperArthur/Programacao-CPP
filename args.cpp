#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
	cout << "quantidade de argumentos: " << argc << endl;
	cout << "argumentos passados: ";
	for(int i=0; i<argc; i++){
		cout << argv[i] << endl;	
	}
	
}
