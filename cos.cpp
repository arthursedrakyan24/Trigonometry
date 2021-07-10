#include "trig.hpp"

int factorial (int n);
double cos (long double x, long double precision){
	//We use the "while" loop for changing the degree to the right position.
	while(x > 180 || x < 0) {
				if( x > 180) {
						x -= 180;
						x*= -1;
						} else {
							x += 180;
							x *= -1;
							}
	}
	//Changing degree to radian value.
	x=x*M_PI/180;
	long double patas=1;
	//We use the "for" loop for calculating the cos owing to Taylor series.
	//Precision is the depth our cos. It means how many times the program will + or - the Taylor cos element.
	for (int i = 1; i<=precision; i++) {
		int k = 2*i;
		patas += pow(-1, i) * pow(x, k) / factorial(k);
	}
	//Returning the cos.
	return patas;
}
