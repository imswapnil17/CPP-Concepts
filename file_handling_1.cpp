#include <conio.h>
#include <iostream>
#include <fstream>

using namespace std;

int main(){
 	ofstream fout;
 	fout.open("For Aman.dat");
 	fout<<"Bihari Raand";
 	fout.close();
	return 0;
}