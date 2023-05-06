#include<iostream>

using namespace std;

class circle{
	
	public:
		
		virtual void calculate() = 0 ;
		
};

class Operations : public circle{
	
	public:
		
		float pi = 3.14 ;
		float r = 5 ;
		float h = 7 ;
		
		void calculate(){
			
			cout<<"Area of Circle : "<<pi*r*r<<endl;
			cout<<"Area of Triangle : "<<(r*h)/2<<endl;
			cout<<"Area of Rectangle : "<<r*h<<endl;
			
		}
	
};

int main (){
	
	Operations obj;
	
	obj.calculate();
	
	return 0 ;
}
