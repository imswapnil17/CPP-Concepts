#include <conio.h>
#include <iostream>
#include <fstream>

using namespace std;

int main(){
 	ofstream fout;
 	fout.open("myfile.dat");
 	fout<<"Hello, World!";
 	fout.close();
	return 0;
}