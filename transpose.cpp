#include<iostream>
using namespace std;
int main()
{
    int mat[3][3], i, j, matT[3][3];
    cout<<"Enter 9 Elements for 3*3 Matrix: "; //input elements
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>mat[i][j];
    }
    cout<<"\nOriginal Matrix is:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<mat[i][j]<<"  ";
        cout<<endl;
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            matT[j][i] = mat[i][j];
    }
    cout<<"\nTranspose of Given Matrix is:\n"; //print transpose of matrix
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<matT[i][j]<<"  ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}