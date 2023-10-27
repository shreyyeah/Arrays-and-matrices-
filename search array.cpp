//22070123114
//to search an element in array
#include<iostream>
using namespace std;

int main()
{
    int n,i,x;
    int a[100];
    cout<<"Enter the no. of elements: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the value : ";
        cin>>a[i];
    }
    cout<<"Enter the value to be searched :";
    cin>>x;
 
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            cout<<"Value Found!at "<<i;
            return 0;
        }
    }
    cout<<"Value Not Found!";
    return 0;
}