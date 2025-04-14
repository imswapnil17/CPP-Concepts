#include <conio.h>
#include <iostream>

template<class X> class ArrayList{
private:
	struct ControlBlock{
		int capacity;
		X *arr_ptr;
	};
	ControlBlock *s;
public:
	ArrayList(int capacity){
		s = new ControlBlock;
		s->capacity = capacity;
		s->arr_ptr = new X[s->capacity];
		s->arr_ptr[capacity] = {0};
	}
	void addElement(int index, X data){
		if(index>=0 &&index<=s->capacity-1){
			s->arr_ptr[index] = data;
		}
		else{
			std::cout<<"Array index is not valid"<<std::endl;
		}
	} 
	void viewList(){
		int i; 
		for(i=0;i<s->capacity;i++){
			std::cout<<" "<<s->arr_ptr[i];
		}
		std::cout<<"\n";
	}
};	
int main(){
	ArrayList <float> list1(4);
	list1.addElement(2,3.56);
	list1.viewList();
	return 0;
}