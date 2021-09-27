#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int bubble_sort(int *p, int b)
{
    int d=0;
    if(b==1)
    {
        return 0;
    }
     for(int i=0;i<b-1;i++)
     {
         if((*(p+i))>(*(p+i+1)))
         {
             d=*(p+i);
             *(p+i)=*(p+i+1);
             *(p+i+1)=d;

         }
         
     }
     bubble_sort(p,b-1);// Using Recursion
    return 0;
}
int main()
{
    int n;
    //cin>>n;
    n=30000;
    int a[n];
    srand(time(0));
    for(int i=0;i<n;i++)
    {
        a[i]=rand();// Using Random Function
    }
    bubble_sort(a,n); // Using Bubble Sort
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    
    return 0;

}
