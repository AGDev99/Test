#include <iostream>

using namespace std;

int main()
{
	int x = 5;
	int *ptr = nullptr;

	ptr = &x;

	cout << "The value of x is : " << x << endl;
	cout << "The memory address of x is: " << ptr << endl;
	cout << &x << endl;

	return 0;

}

