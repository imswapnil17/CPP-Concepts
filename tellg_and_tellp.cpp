#include <conio.h>
#include <iostream>
#include <fstream>
//tellg() tells the index of the character which ifstream is pointing to.

int main(){
	//tellg()
	std::ifstream fin;
	fin.open("myfile.dat");
	char ch;
	int pos; 
	pos = fin.tellg();
	std::cout<<pos<<"\n";
	fin>>ch;
	pos = fin.tellg();
	std::cout<<pos<<"\n";
	fin.close();

//	tellp()

	std::ofstream fout;
	fout.open("myfile.dat",std::ios::app);
	int posO ;
	posO= fout.tellp();
	fout<<"My sir g";
	std::cout<<posO;

	fout.close();
	return  0;
}