//22070123114
//exp7-functions of string
# include <iostream>
#include<string.h>
using namespace std;

int main() 
{
    int i;
    int x;
    string str1,str2;
    cout<<"enter the string-";
    /*length of the string*/
    cin>>str1;
    for (i = 0; str1[i]; i++);
    cout <<"Length of the string:" <<i << endl;
    cout<<"enter second string-";
    cin>>str2;
    /*concatenation of strings*/
    cout<<"Concatenation of str1 and str2-"<<str1 + str2<<endl;
    string strc=str1+str2;
    for(x=0;strc[x];x++);
    cout<<"length of concatenated string-"<<x<<endl;
    /*comparison of the strings*/
    if(str1==str2)
    {
        cout<<"Strings are equal"<<endl;
    }
    else
    {
        cout<< "Strings are not equal"<<endl;
    }

}