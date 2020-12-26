//* this was compiled in dev c++
#include<iostream>
using namespace std;
int pat(int n)
{
	if(n>0)
	{	
		pat(n-1);
		cout<<n;
		pat(n-1);
	}
	else if(n<0)
	{
		cout<<"please enter positive integers";
	}
};
int main()
{
	int d;
	cout<<"enter n:";
	cin>>d;
	pat(d);
	return 0;
}

