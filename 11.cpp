#include <iostream>
using namespace std;
int main()
{
    int H;
    float C;
    int T;
	cout<<"Enter value of Hardness: "<<endl;
	cin>>H;
	cout<<"Enter value of Carbon Content: "<<endl;
	cin>>C;
	cout<<"Enter value of Tensile Strength: "<<endl;
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
