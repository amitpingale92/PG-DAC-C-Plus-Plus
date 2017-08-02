#include <iostream>

using namespace std;

////////////////////////////////////////

class Interval
{
public:
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

	long operator[](int index) const //[]->subtype: checks for zero and non-zero values.
	{
		return index > 0 ? (time / 60) : (time % 60);
	}

	operator double() const
	{
		return time / 60.0;
	}

private:
	long time; 

};

////////////////////////////////////////

int main(void)
{
	Interval a(2, 105);
	a.Print();
	cout << a[5] << " minutes and " << a[0] << " seconds." << endl; 

	double d = a;
	cout << d << endl;
}











