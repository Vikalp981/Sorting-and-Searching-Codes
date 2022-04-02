#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int array[], int n, int data)
{
    int l=0,r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(array[mid]==data){
            return mid;
        }
        else if(array[mid]>data){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}
int main(void)
{
    cout<<"Enter the size of array"<< endl;
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter elements in sorted order"<<endl;
    for(int i=0;i<n;i++)
    {   
        cin>>a[i];
    }
    cout<<"Enter number to be searched"<<endl;
    int key;
    cin>>key;
    int result=BinarySearch(a,n,key);
    if (result==-1){
        cout<<"Element not present";
    }
    else{
        cout<<"Element present at position "<<result+1;
    }

}