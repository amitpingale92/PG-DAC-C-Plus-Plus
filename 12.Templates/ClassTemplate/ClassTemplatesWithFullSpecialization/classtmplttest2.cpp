#include <iostream>
#include <string>

using namespace std;

template<typename I, typename V> 
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


template<> //full specialization of IndexedValue class template
class IndexedValue<int, string>
{
public:
	IndexedValue()
	{
		static int nid;

		index = ++nid;
	}

	int Index() const
	{
		return index;
	}

	string GetValue() const
	{
		return value;
	}

	void SetValue(const string& v)
	{
		value = v;
	}

	void Print() const
	{
		cout << "[" << index << "] = '" << value << "'" << endl; 
	}

private:
	int index;
	string value;
};


int main(void)
{
	IndexedValue<string, double> a("first"); 
	a.SetValue(3.45);
	a.Print();

	IndexedValue<string, long> b("second");
	b.SetValue(56);
	b.Print();

	IndexedValue<int, string> c;
	c.SetValue("Wednesday");
	c.Print();

	IndexedValue<int, string> d;
	d.SetValue("Thursday");
	d.Print();
}











