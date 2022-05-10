#include <iostream>
using namespace std;

int main_0510_3() {
	double num = 3.14;
	double* ptr = &num;
	double** dptr = &ptr;

	printf("%9p %9p\n", ptr, *dptr);
	printf("%9g %9g\n", num, **dptr);

	double* ptr2;
	ptr2 = *dptr;
	*ptr2 = 10.99;
	printf("%9g %9g\n", num, **dptr);

	return 0;
}