#include<iostream>
using namespace std;
class Complex
{
	int real,imaginary;
	public:
		void get()
		{
			cout<<"Enter real part=";
			cin>>real;
			cout<<"Enter imaginary part=";
			cin>>imaginary;
		}
		void operator+(Complex c2)
		{
			int x=real+c2.real;
			int y=imaginary+c2.imaginary;
			cout<<"Addition of complex no.==\t"<<x<<"+i"<<"("<<y<<")"<<endl;
		}
		void operator-(Complex c2 )
		{
			int k=imaginary-c2.imaginary;
			int z=real-c2.real;
			cout<<"Subtraction of complex no.==\t"<<z<<"+i"<<"("<<k<<")";
		}
};
int main()
{
	Complex c1,c2;
	c1.get();
	c2.get();
	c1+c2;
	c1-c2;
	return 0;
}
