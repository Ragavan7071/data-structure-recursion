//*to 
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
	else
	    return 0;
};
int main()
{
	int d;
	cin>>d;
	pat(d);
	return 0;
}

