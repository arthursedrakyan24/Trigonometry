#include "trig.hpp"

//Before "main" function, we declare that functions, which we'll use in the "main" function.
double sin (long double a, long double b);
double cos (long double a, long double b);
int main () {
	//Declaring that type of trigonometric function and the degree, which we'll input.
	string type;
	int degree;
	cout<<"Please, enter your type :"<<endl;
	cin >> type;
	//With the "assert" tool we want to say, that we'll input only "sin" or "cos".
	assert(type=="sin" || type=="cos");
	cout<<"Please, enter your degree :"<<endl;
	cin >> degree;
	//Outputing our values.
	if (type=="sin"){
	cout << sin (degree, 10) << endl;
} else if (type=="cos"){
	cout << cos (degree, 10) << endl;
}
}
