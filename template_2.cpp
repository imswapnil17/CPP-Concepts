#include <conio.h>
#include <iostream>

class ArrayList{
private:
	struct ControlBlock{
		int capacity;
		int *arr_ptr;
	};
	ControlBlock *s;
public:
	ArrayList(int capacity){
		s = new ControlBlock;
		s->capacity = capacity;
		s->arr_ptr = new int[s->capacity];
	}
};
int main(){
	std::cout<<"Hello world~!"<<std::endl;
	return 0;
}