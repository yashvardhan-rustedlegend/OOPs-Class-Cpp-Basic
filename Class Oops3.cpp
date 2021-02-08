#include<iostream>
using namespace std;
class student
{
	private:
		int variable[5];
	public:
		void input()
		{
			for(int i=0;i<5;i++)
			{
				cin>>variable[i];
			}
		}
		int calculateTotalScore()
		{
			int count=0;
			for(int i=0;i<5;i++)
			{
				count+=variable[i];
			}
			return count;
		}
};
int main()
{
	student s1;
	student s2;
	int a,b;
	cout<<"Enter the marks of Student1"<<endl;
	s1.input();
	a=s1.calculateTotalScore();
	cout<<"Enter the marks of Student2"<<endl;
	s2.input();
	b=s2.calculateTotalScore();
	if(a>b)
	{
		cout<<"Student1 score is higher"<<endl;
	}
	else
	{
		cout<<"Student2 score is higher"<<endl;
	}
	return 0;
}
