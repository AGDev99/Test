#include <iostream>

using namespace std;

int main()
{
	const int SIZE = 8;

	int set[SIZE] = {5,10,15,20,25,30};
	int *numPtr = nullptr;

	int count; 

	numPtr = set;
	
	cout << "The numbers in the set are" << endl;
	
	for(count = 0; count < SIZE; count++)
	{
		cout << *numPtr << " ";
		numPtr++;
	}

	return 0;
}
