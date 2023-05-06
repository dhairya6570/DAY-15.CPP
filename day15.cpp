#include<iostream>

using namespace std;

class circle{
	
	public:
		
		virtual void calculate() = 0 ;
		
};

class Operations : public circle{
	
	public:
		
		int pi = 3.14 ;
		int r = 5 ;
		
		void calculate(){
			
			cout<<"Area of Circle : "<<pi*r*r<<endl;
			
		}
	
};

int main (){
	
	Operations obj;
	
	obj.calculate();
	
	return 0 ;
}
