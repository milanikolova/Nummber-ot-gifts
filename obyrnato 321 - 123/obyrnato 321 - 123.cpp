#include <iostream> 

using namespace std;

int main()
{
	int a, x1, x2, x3;
	cin >> a;
	x1 = a / 100;
	x2 = a / 10 % 10;
	x3 = a % 10;
	cout << x3 << endl;
	cout << x2 << endl;
	cout << x1 << endl;
	}
