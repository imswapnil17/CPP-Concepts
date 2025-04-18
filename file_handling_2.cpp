#include <fstream>
#include <iostream>
#include <conio.h>
#include <string.h>

int main(){
	std::ifstream fin;
	fin.open("myfile.dat");
	std::string ch;
	while(!fin.eof()){
		ch= fin.get();
		std::cout<<ch;
	}
	std::cout<<"\n";

 	std::cout<<"Hello, World!";
}