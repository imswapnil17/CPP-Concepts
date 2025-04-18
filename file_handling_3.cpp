#include <iostream>
#include <fstream>
#include <conio.h>



int main(){

	std::ofstream fout;
	fout.open("new.txt",std::ios::binary);
	fout<<"\n aljflaj";
	return 0;
}