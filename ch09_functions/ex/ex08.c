void f(double x); // valid
void f(double); // valid, names are not required 
void f(x); // invalid, types of parameters can't be omitted
// f(double x); // invalid, no return type