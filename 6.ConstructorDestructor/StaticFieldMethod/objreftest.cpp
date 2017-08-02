#include <iostream>

using namespace std;

////////////////////////////////////////

class Interval
{
public:
	Interval(long seconds=0, long minutes=0)
	{
		time = 60 * minutes + seconds;
		++count;
		cout << "Interval instance initialized" << endl;
	}

	long GetTime() const //long Interval::GetTime(const Interval* this)
	{
		return time; //this->time
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

	static int CountInstances() 
	{
		return count;
	}

	~Interval()
	{
		count--;
		cout << "Interval instance finalized" << endl;
	}

private:
	long time; 
	static int count; 
};

int Interval::count = 0; 

////////////////////////////////////////

float Speed(float distance, const Interval& duration)
{
	return 3.6 * distance / duration.GetTime();
}

int main(void)
{
	Interval jack;  
	jack.SetTime(125);
	cout << "Jack's Interval = ";
	jack.Print();
	cout << "Jack's Speed = "
		 << Speed(500, jack)
		 << endl;

	Interval john = 200; 
	cout << "John's Interval = ";
	john.Print();
	cout << "John's Speed = "
		 << Speed(500, john)
		 << endl;

	cout << "Number of Intervals in memory = "
		 << Interval::CountInstances()
		 << endl;
}











