#include "doMath.h"

int main(){

	int a,b;
	std::cout<<"a: ";
	std::cin>>a;
	std::cout<<"b: ";
	std::cin>>b;
	doMath op(a,b);
	std::cout<<"a+b = "<< op.sum() << std::endl;	
	std::cout<<"a-b = "<< op.sub() << std::endl;	
	std::cout<<"a*b = "<< op.mul() << std::endl;	

	return 0;

}
