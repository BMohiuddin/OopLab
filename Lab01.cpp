#include <iostream>
using namespace std;
int main()
{
    cout<<"Start"<<endl;
    int H;
    int C;
    int T;
	cout<<"Give value of Hardness: "<<endl;
	cin>>H;
	cout<<"Give value of Carbon Content: "<<endl;
	cin>>C;
	cout<<"Give value of Tensile Strength: "<<endl;
	cin>>T;
	if (H>50 && C<0.7 && T>5600)
	{
		cout<<"Grade 10"<<endl;
		return 0;
	}
	if (H>50 && C<0.7)
	{
		cout<<"Grade 9"<<endl;
		return 0;
	}
	if (C<0.7 && T>5600)
	{
		cout<<"Grade 8"<<endl;
		return 0;
	}
	if (H>50 && T>5600)
	{
		cout<<"Grade 7"<<endl;
		return 0;
	}
	if (H>50 || C<0.7 || T>5600)
	{
		cout<<"Grade 6"<<endl;
	}
	else
	{
		cout<<"Grade 5"<<endl;
	}
	return 0;
}
