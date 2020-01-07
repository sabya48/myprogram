#include<bits/stdc++.h>
using namespace std;
int main()
{
	int choice;
	float temp,countemp;
	cout<<"Temperature conversion Menu"<<endl;
	cout<<"1. Fahrenheit to celsius"<<endl;
	cout<<"2. celsius to fahrenheit"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>choice;
	if(choice==1)
	{
		cout<<"Enter the temperature in Fahrenheit"<<endl;
		cin>>temp;
		countemp=(temp-32)/18;
		cout<<"The temperature in celsius is: "<<countemp<<endl;
	}
	else
	{
		cout<<"Enter the Temperature in centrigrade"<<endl;
		cin>>temp;
		countemp=1.8*temp+32;
		cout<<"The temperature in Fahrenheit is: "<<countemp<<endl;
		
	}
	return 0;
}
