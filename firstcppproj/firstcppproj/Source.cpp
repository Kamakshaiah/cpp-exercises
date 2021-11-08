#include <iostream>
using namespace std;

int add(int x, int y); 
int subtract(int x, int y); 
int multiply(int x, int y); 
int divide(int x, int y); 

int main() {
	int res1, res2, res3, res4; 
	res1 = add(1, 2); 
	res2 = subtract(1, 2); 
	res3 = multiply(1, 2);
	res4 = divide(1, 2); 

	cout << "the addition is: " << res1 << endl; 
	cout << "the subtraction is: " << res2 << endl;
	cout << "the multiplication is: " << res3 << endl;
	cout << "the division is: " << res4 << endl;
	return 0;
}

int add(int x, int y) {
	int z = x + y; 
	return z; 
}

int subtract(int x, int y) {
	int z = x - y;
	return z;
}

int multiply(int x, int y) {
	int z = x * y;
	return z;
}

int divide(int x, int y) {
	int z = x / y;
	return z;
}