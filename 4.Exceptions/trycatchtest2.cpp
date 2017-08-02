#include <iostream>
#include <string>

using namespace std;

struct BadName {};

int Search(string key, string keys[], int count)
{
	if(key.size() < 4)
	{
		BadName bn;
		throw bn;
	}

	for(int i = 0; i < count; ++i)
	{
		if(keys[i] == key)
			return i;
	}

	throw key;
}

int Run(void)
{
	string names[] = {"jack", "jill", "john", "jane"};
	long balances[] = {11000, 9000, 10000, 12000};

	string name;
	cout << "Name: ";
	cin >> name;

	int i = Search(name, names, 4);
	cout << "Balance: " << balances[i] << endl;
}

int main(void)
{
	cout << "Welcome to our bank" << endl;
	try
	{
		Run();
	}
	catch(...)
	{
		cout << "Invalid name" << endl;
	}
	cout << "Goodbye from our bank" << endl;
}








