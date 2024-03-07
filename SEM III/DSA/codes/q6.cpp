// C++ Program to find the sum of the series of 1 using constructor destructor
#include<iostream>
using namespace std;
class Sum
{
	public :
	Sum();
	~Sum();
	void read();
};
Sum::Sum()
{
	cout<<endl;
}
void Sum::read()
{

	{
		cout<<"enter a number : ";
	int n;
		cin>>n;
  int s=0;
	 int t=1,i=1;
	 for(i=1;i<=n;i++)
  {
  	cout<<" "<<t<<" ";
      if (i<n)
      {
      	cout<<"+";    
      }
     s=s+t;
     t=(t*10)+1;
  }
  cout<<endl<<"The sum is :"<<s;
}
}
	Sum::~Sum()
		{
			cout<<endl<<"detail is clear";
		}
int main()
{
	Sum u;
	u.read();

}