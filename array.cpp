#include <iostream>
using namespace std;

int main() 
{
    int marks[5];

    cout<<"enter 5 marks";
    
    for(int i=0;i<5;i++)
    {
        cin>>marks[i];
    }

    cout<<"the marks are:";

    for(int j=0;j<5;j++)
    {
        cout<<marks[j]<<" ";
    }
   return 0;
}