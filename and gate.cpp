#include<iostream>
using namespace std;
int main()
{
	int valueone;
	int valuetwo;
	int valuethree;
	cout<<"please enter valueone\n";
	cin>> valueone;
	cout<<"please enter valuetwo\n";
	cin>> valuetwo;
	cout<<"please enter valuethree\n";
	cin>> valuethree;
	if(valueone<valuetwo && valueone>valuethree )
	{
		cout<<"value one is less than value two and is greater than value three";
	}
	else
	{
		cout<<"does not meet the conditon";
	}
	
	
}
