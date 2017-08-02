#include <iostream>

using namespace std;

////////////////////////////////////////

class Interval
{
public:
	//can be used as default, conversion and parameterized constructor
	Interval(long seconds=0, long minutes=0)
	{
		time = 60 * minutes + seconds;
		++count;
	}

	long GetTime()
	{
		return time;
	}

	void SetTime(long value) 
	{
		time = value; 
	}

	//instance method - is invoked on an object using . operator
	//receives this pointer as its first (hidden) argument
	void Print()
	{
		if(time % 60 < 10)
			cout << time / 60 << ":0" << time % 60 << endl;
		else
			cout << time / 60 << ":" << time % 60 << endl;
	}

	//class method - is invoked on the class using :: operator
	//does not receive this pointer
	//and as such it cannot refer to instance (non-static) members
	static int CountInstances()
	{
		return count;
	}

	//destructor - is invoked implictly just before an object is deallocated
	~Interval()
	{
		count--;
	}

private:
	long time; //instance field - each object receives a separate value
	static int count; //class field - all objects share a single value
};

int Interval::count = 0; //allocating memory for class field

////////////////////////////////////////

void Run(void)
{
	Interval jeff(75, 4); 
	cout << "Jeff's Interval created" << endl;
	cout << "Jeff's Interval = ";
	jeff.Print();
	cout << "Jeff's Interval destroyed" << endl;
	//stack (unwind) semantics - automatic invocation of destructor for local objects  
}

int main(void)
{
	Interval jack; //jack(0, 0); 
	cout << "Jack's Interval created" << endl;
	jack.SetTime(125);
	cout << "Jack's Interval = ";
	jack.Print();

	Run();

	Interval john = 200; //john(200, 0);
	cout << "John's Interval created" << endl;
	cout << "John's Interval = ";
	john.Print();

	cout << "Number of Intervals in memory = "
		 << Interval::CountInstances()
		 << endl;

	cout << "John's Interval destroyed" << endl;
	cout << "Jack's Interval destroyed" << endl;
}











