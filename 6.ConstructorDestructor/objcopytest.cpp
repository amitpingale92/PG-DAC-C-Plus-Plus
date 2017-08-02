#include <iostream>

using namespace std;

////////////////////////////////////////

class Interval
{
public:
	explicit Interval(long minutes=0, long seconds=0)
	{
		time = 60 * minutes + seconds;
		cout << "Interval instance initialized." << endl;
	}

	Interval(const Interval& other)
	{
		time = other.time;
		cout << "Interval instance copy initialized." << endl;
	}

	void operator=(const Interval& other)
	{
		time = other.time;
		cout << "Interval instance assigned." << endl;
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

	~Interval()
	{
		cout << "Interval instance finalized." << endl;
	}

private:
	long time; 

};

class Journey
{
public:
	Journey(float dist, const Interval& dur) : duration(dur) 
	{
		distance = dist;
		//duration = dur;
		cout << "Journey instance initialized." << endl;
	}

	float Speed() const
	{
		return 3.6 * distance / duration.GetTime();
	}

	~Journey()
	{
		cout << "Journey instance finalized." << endl;
	}

private:
	float distance;
	Interval duration;
};

////////////////////////////////////////

void Run(void)
{
	Interval a(3, 45);
	Journey j(4500, a);
	cout << "Speed = " << j.Speed() << endl;
}

int main(void)
{
	/*
	Interval a(3, 45);
	Interval b = a; //Interval b(a) 
	Interval c;
	c = a; //c.operator=(a) 
	*/
	cout << "Journey begins..." << endl;
	Run();
	cout << "Journey ends." << endl;
}











