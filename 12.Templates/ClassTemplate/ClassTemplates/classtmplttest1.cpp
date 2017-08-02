#include <iostream>
#include <string>

using namespace std;

template<typename I, typename V> //class template
class IndexedValue
{
public:
	IndexedValue(const I& i) : index(i) {}

	I Index() const
	{
		return index;
	}

	V GetValue() const
	{
		return value;
	}

	void SetValue(const V& v)
	{
		value = v;
	}

	void Print() const
	{
		cout << "[" << index << "] = " << value << endl; 
	}

private:
	I index;
	V value;
};

int main(void)
{
	IndexedValue<string, double> a("first"); //instantiating templated IndexedValue class with I=string, V=double
	a.SetValue(3.45);
	a.Print();

	IndexedValue<string, long> b("second");
	b.SetValue(56);
	b.Print();

	IndexedValue<int, string> c(3);
	c.SetValue("Wednesday");
	c.Print();
}











