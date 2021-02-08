#include<iostream>
using namespace std;
class Employee
{
	private:
		char name[20];
		int salary;
		int hours;
	public:
	void Setinfo(int salary,int hours)
	{
		(*this).salary=salary;
		(*this).hours=hours;
	}
	void AddSal()
	{
		if(salary<7000)
		{
			salary+=50;
		}
	}
	void AddWork()
	{
		if(hours>6)
		{
			salary+=25;
		}
	}
	int getSalary()
	{
		return salary;
	}
};
int main()
{
	Employee e;
	e.Setinfo(6000,7);
	e.AddSal();
	e.AddWork();
	e.getSalary();
	cout<<"Final Salary="<<e.getSalary()<<endl;
	return 0;
}
