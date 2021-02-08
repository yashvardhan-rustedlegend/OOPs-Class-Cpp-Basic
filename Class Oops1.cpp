#include<iostream>
using namespace std;
class room
{
	private:
		int length,breadth,height;
	public:
		void calculateVolume(int x, int y, int z)
		{
			cout<<"Volume of the room is=";
			cout<<x*y*z<<endl;
		}
		void calculateArea(int x, int y,int z)
		{
			cout<<"Area of the room is=";
			cout<<2*(x*y+z*y+x*z);
		}
};
int main()
{
	room r;
	r.calculateVolume(3,4,5);
	r.calculateArea(3,4,5);
	return 0;
}
