#include<iostream>
using namespace std;
int multiply(int a, int b) {
	return a * b;
}
void multiplyAndLog(int a, int b) {
	int result = multiply(a, b);
	cout << result << endl;
}

int main()
{
	multiplyAndLog(3, 2);
	multiplyAndLog(5, 8);
	multiplyAndLog(40, 25);
	cin.get();
}