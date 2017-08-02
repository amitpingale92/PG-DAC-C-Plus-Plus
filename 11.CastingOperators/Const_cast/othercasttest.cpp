#include "student.h"
#include <iostream>

using namespace std;

void Print(const Student* entry)
{
	cout << "ID is "
		 << entry->GetId() //lazy initialization
		 << " and Score is "
		 << entry->GetScore()
		 << endl;
}

struct Candidate
{
	long id;
	float score;
};

int main(void)
{
	Student jack(58);
	Student jill(63);
    Student john(100);
    
	cout << "Jack's ";
	Print(&jack);
	cout << "Jill's ";
	Print(&jill);
    
	Student* john = const_cast<Student*>(Student::BestStudent());
	john->SetScore(88);
	Candidate* cjohn = reinterpret_cast<Candidate*>(john);
	cjohn->id = 4;
	cout << "John's ";
	Print(john);

}










