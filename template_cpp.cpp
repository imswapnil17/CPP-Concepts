#include <conio.h>
#include <iostream>

// Generalization of a funciton (Template of the function)



template <class X> 
X big(X a, X b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}


int main(){
	std::cout<<big(5,6);
	std::cout<<big(5.6,3.4);
	std::cout<<big('d','d');
}