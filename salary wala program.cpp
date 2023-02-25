#include<iostream>
using namespace std;
int main()
{
	int salary, net;
	cout<<"enter salary";
	cin>>salary;
	if(salary>30000)
	net=salary-(salary*7/100);
 else if(salary<15000)
net=salary-1000;
else
net=salary;		
	cout<< " net salary" << net;
return 0;
}