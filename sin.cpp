#include "trig.hpp"

int factorial (int n);
double sin (long double x, long double precision){
	//We use the "while" loop for changing the degree to the right position.
	while( x>90 || x<-90) {
				if( x > 90){
		  		x -= 180;
				} else {
	        			x += 180;			}
	}
	//Changing degree to radian value.
	x=x*M_PI/180;
	long double patas=0;
	//We use the "for" loop for calculating the cos owing to Taylor series.
	//Precision is the depth our sine. It means how many times the program will + or - the Taylor sine element.
	for (int i = 0; i<=precision; i++) {
					int k = 2*i + 1;
					patas += pow(-1, i) * pow(x, k) / factorial(k);

	//Returning the sine.
	return patas;
}
