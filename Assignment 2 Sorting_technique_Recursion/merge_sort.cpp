#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;



void merge(int arr[], int p, int q, int r) {
  
  
  int n1 = q - p + 1;
  int n2 = r - q; //Created 2 arrays For Division and combining

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  
  int i, j, k;
  i = 0;
  j = 0;//Adding elements in the main array and combining them
  k = p;

  
  while (i < n1 && j < n2) {   //Checking for element less than a given value
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}





int main()
{
    int n;
    //cin>>n;
    n=4500;
    int a[n];
    srand(time(0));
    for(int i=0;i<n;i++)
    {
        a[i]=rand();
    }
    mergeSort(a, 0, n - 1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

}
