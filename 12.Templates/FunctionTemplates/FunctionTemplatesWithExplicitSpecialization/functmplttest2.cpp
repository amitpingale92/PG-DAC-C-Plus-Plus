#include <iostream>

using namespace std;

int nid = 0;

template<typename Any>
void PrintIndexed(Any value)
{
	cout << "[" << (++nid) << "] = " << value << endl;
}

template<> //explicit specialization of PrintIndexed function template for Any=bool
void PrintIndexed(bool value)
{
    cout << "[" << (++nid) << "] = " << (value ? "yes" : "no") << endl;
}

template<> //explicit specialization of PrintIndexed function template for Any=char
void PrintIndexed(char value)
{
    cout << "[" << (++nid) << "] = '" << value << "'" << endl;
}


int main(void)
{
	double a = 3.45;
	PrintIndexed<double>(a);

	long b = 56;
	PrintIndexed(b);

	bool c = true;
	PrintIndexed(c);

	bool d = false;
	PrintIndexed<bool>(d);

	char e = 'L';
	PrintIndexed(e);
}





