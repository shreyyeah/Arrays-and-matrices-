#include <iostream>
using namespace std;
main()
{
    int key,i,marks[10] = {45,67,89,34,56};
    cout<<"enter the number";
    cin>>key;

for(i=0;i<10;i++)
{
    if(key== marks[i])
    {
        cout<<"key found at location"<<i;
        break;
    }
}
if(i==10);
{
    cout<<"key not found at location"<<i;
}
}
