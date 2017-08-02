#include <iostream>

using namespace std;

////////////////////////////////////////

class Interval
{
public:
	explicit Interval(long m=0, long s=0)
	{
		minutes = m + s / 60;
		seconds = s % 60;
		cout << "Interval instance initialized." << endl;
	}
	
	long GetTime() const
	{
		return 60 * minutes + seconds;
	}

	void SetTime(long value) 
	{
		minutes = value / 60; 
		seconds = value % 60; 
	}

	void Print() const
	{
		if(seconds < 10)
			cout << minutes << ":0" << seconds << endl;
		else
			cout << minutes << ":" << seconds << endl;
	}

	~Interval() 
	{
		cout << "Interval instance finalized." << endl;
	}

private:
	long minutes;
	long seconds;
};

////////////////////////////////////////

float Speed(float distance, const Interval& duration)
{
	return 3.6 * distance / duration.GetTime();
}

int main(void)
{
	Interval* jack = new Interval; //dynamic instantiation using default constructor
	jack->SetTime(125);
	cout << "Jack's Interval = ";
	jack->Print();
	cout << "Jack's Speed = "
		 << Speed(500, *jack)
		 << endl;

	Interval* john = new Interval(2, 80); //dynamic instantiation using parameterized constructor
	cout << "John's Interval = ";
	john->Print();
	cout << "John's Speed = "
		 << Speed(500, *john)
		 << endl;
	
	delete john;
	delete jack;
}














