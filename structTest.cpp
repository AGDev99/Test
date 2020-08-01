#include <iostream>
#include <string>

using namespace std;

struct Name
{
	string first;
	string last;
};
int main()
{
	Name Alex;

	cout << "Please enter your name: " << endl;
	cout << "First: " ;
//	cin.ignore();
	getline(cin, Alex.first);

	cout << "Last: ";
	getline(cin, Alex.last);

	cout << "Your name is : " << Alex.first << " " << Alex.last;
		
	return 0;
}
