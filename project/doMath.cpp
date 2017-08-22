#include "doMath.h"

doMath::doMath(int opA, int opB){

	a=opA;
	b=opB;

}

int doMath::sum(){

	return a+b;
}

int doMath::sub(){

	return a-b;
}

int doMath::mul(){

	return a*b;
}

