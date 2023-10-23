#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout<<"please enter your value\n";
	cin>> a;
	cout<<"please enter your limit\n";
	cin>> b;
	int i = 1;
	while(i<=b)
	{
		cout<<a<<"x"<<i<<"="<<a*i<<endl;
		i++;
	}
	
}
	
