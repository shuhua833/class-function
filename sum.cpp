#include<iostream>
using namespace std;
class sum{
	private:
		int a, b;
		public:
		void getdata();
		void showdata();
};
void sum::getdata()
{
	cout<<"enter value of a and b"<<endl;
	cin>>a;
	cin>>b;
}
void sum::showdata()
{
	cout<<"sum of "<<a<<" and"<<b<<" is "<<a+b;
}
int main()
{
	sum s;
	s.getdata();
	s.showdata();
	return 0;
}
