#include <iostream>

using namespace std;

///////////////////////////////////////////

class TaxPayer
{
public:
	long PIN() const
	{
		return pin;
	}

	virtual double Income() const = 0;

	double Tax() const
	{
		double ex = Income() - 120000;

		return ex > 0 ? 0.15 * ex : 0; 
	}

	static int Count()
	{
		return count;
	}

	virtual ~TaxPayer()
	{
		--count;
	}

protected:
	TaxPayer(long pn)
	{
		pin = pn;
		count++;
	}

private:
	long pin;
	static int count;
};

int TaxPayer::count = 0;

void Print(const TaxPayer* entry)
{
	cout << "P.I.N is "
		 << entry->PIN()
		 << " and Tax is "
		 << entry->Tax()
		 << endl;
}

class Employee : public virtual TaxPayer
{
public:
	Employee(long pn, double sy) : TaxPayer(pn)
	{
		salary = sy;
	}

	double Income() const
	{
		return 12 * salary + 20000;
	}

private:
	double salary;
};

class Dealer : public virtual TaxPayer
{
public:
	Dealer(long pn, double ss) : TaxPayer(pn)
	{
		sales = ss;
	}

	double Income() const
	{
		return 0.2 * sales;
	}

private:
	double sales;
};

class SalesPerson : public Employee, public Dealer
{
public:
	SalesPerson(long pn, double sy, double ss) : Employee(pn, sy), Dealer(pn, ss), TaxPayer(pn) 
	{
	}

	double Income() const
	{
		return Employee::Income() - 20000 + Dealer::Income() / 3;
	}
};

///////////////////////////////////////////

int main(void)
{
	Employee* jill = new Employee(123456, 45000);
	Dealer* jack = new Dealer(234567, 2500000);
	SalesPerson* john = new SalesPerson(345678, 18000, 600000);

	cout << "Jill the Employee: ";
	Print(jill);
	cout << "Jack the Dealer: ";
	Print(jack);
	cout << "John the SalesPerson: ";
	//Print(static_cast<Employee*>(john));
	Print(john);
	cout << "Number of TaxPayers = " << TaxPayer::Count() << endl;
	cout << jill << "\t" << static_cast<TaxPayer*>(jill) << endl;
	delete john;
	delete jack;
	delete jill;
}













