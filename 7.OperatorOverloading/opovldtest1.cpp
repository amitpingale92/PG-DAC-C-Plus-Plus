#include <iostream>

using namespace std;

////////////////////////////////////////

class Interval
{
public:
	//one argument constructor which cannot be used for conversion
	explicit Interval(long seconds=0)
	{
		time = seconds;
	}

	Interval(long minutes, long seconds)
	{
		time = 60 * minutes + seconds;
	}

	long GetTime() const 
	{
		return time; 
	}

	void SetTime(long value) 
	{
		time = value; 
	}

	void Print() const
	{
		if(time % 60 < 10)
			cout << time / 60 << ":0" << time % 60 << endl;
		else
			cout << time / 60 << ":" << time % 60 << endl;
	}

	//Interval Add(const Interval& other) const
	Interval operator+(const Interval& other) const
	{
		return Interval(time + other.time);
	}

	Interval operator++()  
	{
		return Interval(++time);
	}

	Interval operator++(int)
	{
		return Interval(time++);
	}

private:
	long time; 

	//following non-member function is defined by the author of class
	//and has access to its private members
	friend Interval operator*(long, const Interval&);
};

Interval operator*(long scalar, const Interval& value)
{
	return Interval(scalar * value.time);
}

////////////////////////////////////////

int main(void)
{
	Interval a(3, 45);
	a.Print();

	Interval b(500);
	b.Print();

	//Interval c = a.Add(b); 
	Interval c = a + b; //a.operator+(b) 
	c.Print();

	Interval d = ++c; //c.operator++() 
	c.Print();
	d.Print();

	Interval e = d++; //d.operator++(0) 
	d.Print();
	e.Print();

	Interval f = 3 * e; //operator*(3, e) 
	f.Print();
}











