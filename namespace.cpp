#include <iostream>

 namespace ns1{
 	int num=42;
 }
 
 namespace ns2{
 	int num=50;
 }

//using namespace ns1
//using namespace ns2

int main(int argc, char *argv[]){
	std::cout << ns1::num << std::endl;
	std::cout << ns2::num << std::endl;
}
