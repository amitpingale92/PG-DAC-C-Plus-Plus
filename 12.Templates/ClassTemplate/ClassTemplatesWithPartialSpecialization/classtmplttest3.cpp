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

template<typename I> //partial specialization of IndexedValue class template
class IndexedValue<I, bool>
{
public:
	IndexedValue(const I& i) : index(i) {}

	I Index() const
	{
		return index;
	}

	bool GetValue() const
	{
		return value;
	}

	void SetValue(bool v)
	{
		value = v;
	}

	void Print() const
	{
		cout << "[" << index << "] = " << (value ? "yes" : "no") << endl; 
	}
	
private:
	I index;
	bool value;
};

int main(void)
{
	IndexedValue<string, double> a("first"); 
	a.SetValue(3.45);
	a.Print();

	IndexedValue<string, long> b("second");
	b.SetValue(56);
	b.Print();

	IndexedValue<int, string> c(3);
	c.SetValue("Wednesday");
	c.Print();

	IndexedValue<string, bool> d("fourth");
	d.SetValue(true);
	d.Print();

	IndexedValue<int, bool> e(5);
	e.SetValue(false);
	e.Print();
}











