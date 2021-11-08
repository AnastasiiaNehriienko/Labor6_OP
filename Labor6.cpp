#include <cmath>
#include <iostream>
using namespace std;
double a, b, dif;
long factorial(int);
double cos_x(double);
double answer(double, double);
int main() {
	cout << "Enter a, b and accuracy: ";
	cin >> a >> b>>dif;
	cout << "y=" << answer(a, b); 
	return 0;
}
long factorial(int num) {
	long factor = 1; 
	for (int k = 1; k <= num; k++)
		factor *= k;
	return factor;
}
double cos_x(double x) {
	int i = 2, k = -1;
	double previous = 1;
	double current = k * pow(x, i) / factorial(i);
	double cos_x = 1;
	while (previous-fabs(current)>=dif || previous - fabs(current)<=0) {
		cos_x += current;
		previous = fabs(current);
		i += 2;
		k *= -1;
		current = k * pow(x, i)/ factorial(i);
	}
	return cos_x;
}
double answer(double m, double n) {
	double y = cos_x(m) + cos_x(n) * cos_x(n) + cos_x(m + n);
	return y;
}