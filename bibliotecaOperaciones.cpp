#include "biblioteca2.hpp"

int suma(int a, int b){
	return a+b;
}

int divi(int a, int b){
	return a/b;
}

int facrorial(int numfac){
	if(numfac==1){
		return 1;
	}else{
		return numfac * factorial(numfac-1);
	}
}
