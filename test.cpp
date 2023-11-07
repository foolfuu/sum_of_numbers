#include <iostream>
using namespace std;
int erfun(int x);

int main()
{
	int a;
	for(;;)
	{
		cin>>a;
		if(a > 7)cout<<"1 + 2 + 3 + ... + "<<a-3<<" + "<<a-2<<" + "<<a-1<<" + "<<a<<" = "<<erfun(a)<<endl;
		else
		{
			cout<<erfun(a);
		}
	}
}

int erfun(int x)
{
	int y , z , w;	
	if(x%2 == 0)
	{
		y = x/2;
		z = x+1;
		return y*z;
	}
	w = x;
	x--;
	y = x/2;
	z = x+1;
	return (y*z) + w;
}
