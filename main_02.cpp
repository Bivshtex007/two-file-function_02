#include <iostream>
#include <cmath>
using namespace std;

int addition (int a, int b);
int multi (int a, int b);
int power (int a, int b);
int division (int a, int b);

int main() {
	int a, b;

	cout << "Enter First Number" << endl;
	cin >> a;
	cout << "Enter Second Number" << endl;
	cin >> b;
	cout << "N1 + N2 = " << addition(a, b) << endl;
	cout << "N1 X N2 = " << multi(a, b) << endl;
	cout << "N1 in Power of N2 will be... " << power(a, b) << endl;
	cout << "N1/N2 = " << division(a, b) << endl;
}