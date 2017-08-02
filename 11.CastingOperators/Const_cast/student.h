#ifndef STUDENT_H
#define STUDENT_H

class Student
{
public:
	Student(float s=0)
	{
		id = 0;
		score = s;
	}

	float GetScore() const
	{
		return score;
	}

	void SetScore(float value)
	{
		score = value;
	}

	long GetId() const
	{
		static long nid = 1;

		if(id == 0)
			id = ++nid;

		return id;
	}

	static const Student* BestStudent()
	{
		static Student best;

		best.id = 1;
		best.score = 100;

		return &best;
	}

private:
	mutable long id;
	float score;
};

#endif








