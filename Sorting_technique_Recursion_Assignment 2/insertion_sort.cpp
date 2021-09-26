#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int insertion_sort(int *p,int m,int d)
{

    int k=0;
    for(int i=d;i>0;i--)
    {
           if(*(p+i)<*(p+i-1))
           {
               k=*(p+i);
               *(p+i)=*(p+i-1);
               *(p+i-1)=k;
           }
           else 
           break;
    }
    d++;
    if(d==m)
    {
        return 0; // Exit Condition
    }
    insertion_sort(p,m,d);// Using Recursion For Sorting
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    srand(time(0));
    for(int i=0;i<n;i++)
    {
        a[i]=rand();
    }

    insertion_sort(a,n,1);// Using Insertion Sort
    cout<<"The sorted array in insertion sort is :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}

