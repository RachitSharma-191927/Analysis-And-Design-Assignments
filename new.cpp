#include<iostream>
using namespace std;
double fibonacci(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else 
	return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
	double a;
	a=60;
	cout<<fibonacci(a)<<endl; 
   
	return 0;	
}
