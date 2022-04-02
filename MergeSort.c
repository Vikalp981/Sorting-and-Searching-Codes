#include<bits/stdc++.h>
using namespace std;
void Merge(int array[],int lb, int mid, int ub){
    int i,j,k;
    i=lb;
    j=mid+1;
    k=lb;
    int b[k];
    while(i<=mid && j<=ub)
    {
        if(array[i]<=array[j])
        {
            b[k]=array[i];
            i++;
        }
        else{
            b[k]=array[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=ub){
            b[k]=array[j];
            j++;
            k++;
        }
    }
    else{
        while(i<=mid){
            b[k]=array[i];
            i++;
            k++;
        }
    }
    for(k=lb;k<=ub;k++){
        array[k]=b[k];
    }
    
}
void MergeSort(int array[], int lb, int ub)
{
    if(lb<ub){
        int mid=(lb+ub)/2;
        MergeSort(array,lb,mid);
        MergeSort(array,mid+1,ub);
        Merge(array,lb,mid,ub);
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
    MergeSort(a,0,n-1);
    for(int i=0; i<n; i++) cout<<a[i]<<" "; 
    cout<<endl;
    
    

}