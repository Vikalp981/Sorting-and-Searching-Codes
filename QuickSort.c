#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int a[], int start, int end)
{
    int pivot = a[end];
    int i = (start-1);
    for(int j=start; j<=end-1; j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(a[i+1], a[end]);
    return (i+1);
}
void quick_sort(int a[], int start, int end)
{
    if(start<end)
    {
        int pivot_index = partition(a, start, end);
        quick_sort(a, start, pivot_index-1);
        quick_sort(a, pivot_index+1, end);
    }
}
int main()
{
  cout<<"Enter the size of array"<< endl;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
  quick_sort(a, 0, n-1);
  for(int i=0; i<n; i++) cout<<a[i]<<" "; 
  cout<<endl;
  return 0;
}