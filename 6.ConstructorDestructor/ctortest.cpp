#include <iostream>

using namespace std;

////////////////////////////////////////

class Interval
{
public:
	//default (zero-argument) constructor
	Interval()
	{
		time = 0;
	}

	//conversion (one-argument) constructor
	Interval(long seconds)
	{
		time = seconds;
	}

	//parameterized (multiple-arguments) constructor
	Interval(long seconds, long minutes)
	{
		time = 60 * minutes + seconds;
	}

	long GetTime()
	{
		return time;
	}

	void SetTime(long value) 
	{
		time = value; 
	}

	void Print()
	{
		if(time % 60 < 10)
			cout << time / 60 << ":0" << time % 60 << endl;
		else
			cout << time / 60 << ":" << time % 60 << endl;
	}

private:
	long time;
};

////////////////////////////////////////

int main(void)
{
	Interval jack; //instantiation using default constructor
	jack.SetTime(125);
	cout << "Jack's Interval = ";
	jack.Print();

	Interval john = 200; //instantiation using conversion constructor
	cout << "John's Interval = ";
	john.Print();

	Interval jeff(75, 4); //instantiation using parameterized constructor
	cout << "Jeff's Interval = ";
	jeff.Print();
}











