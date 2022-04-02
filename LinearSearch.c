#include<bits/stdc++.h>
using namespace std;
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
    cout<<"Enter number to be searched"<<endl;
    int key;
    cin>>key;
    int c=0;
    for(int i=0;i<n;i++)
    {   
        if(a[i]==key)
        {
            cout<<"It is present in "<< i+1<<" position"<<endl;
            c=1;
            break;
        }
    }
    if(c==0){
        cout<<"Element is not present"<<endl;
    }

}