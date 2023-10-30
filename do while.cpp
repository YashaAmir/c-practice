#include<iostream>
using namespace std;
int main()
{
	int valueone;
	int valuetwo;
	int flag = 1;
	do
	{
		cout<<"please enter first value\n";
		cin>> valueone;
		cout<<"please enter 2nd value\n";
		cin>> valuetwo;
		cout<<"the result is"<< valueone + valuetwo<<endl;
		cout<<" do you want to continue if yes than press 1 key and press any other key to exit\n";
		cin>> flag;
	}
	while(flag==1);
	
}
