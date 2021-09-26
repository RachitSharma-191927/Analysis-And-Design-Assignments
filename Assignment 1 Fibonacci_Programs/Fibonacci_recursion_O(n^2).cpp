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
	cout<<"Enter the Number of Element :";
	a=50;
	for(int i=0;i<a;i++)
	{
	cout<<fibonacci(i)<<" "; 
    }
    
	return 0;	
}
