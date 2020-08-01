#include <iostream>

using namespace std;

struct Name
{
	string first;
	string last;
};

int main()
{
	Name yourName;

	cout << "Please enter your name" << endl;
	cout << "First: " << endl;
	getline(cin, yourName.first);

	cout << "Last: " << endl;
	getline(cin, yourName.last);

	cout << "Your name is "  << yourName.first << " " << yourName.last;

	return 0;
}
