#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand((unsigned)time(0));
	int n1,n2;
	int count;
	int d1,d2;
	d1=0;
	d2=0;
	while (d1<1000 && d2<1000)
	{
		n1=rand()%100;
		n2=rand()%100;
		if (n1==26 || n1== 74)
		{
			d1=d1+5;
		}
		else
		{
			d1=d1+3;
		}
		if (n2==26 || n2== 74)
		{
			d2=d2+4;
		}
		else
		{
			d2=d2+3;
		}
		count=count+1;
		if (count%50==0)
		{
			cout<<"Distance covered by FrogPrime: "<<d1<<endl;
			cout<<"Distance covered by Frogatron: "<<d2<<endl;
		}
	}
	if (d1>=1000 && d2>=1000)
	{
		cout<<"There was a Tie"<<endl;
		return 0;
	}
	if (d1>=1000)
	{
		cout<<"FrogPrime won"<<endl;
		return 0;
	}
	else
	{
		cout<<"Frogatron won"<<endl;
		return 0;
	}

}











