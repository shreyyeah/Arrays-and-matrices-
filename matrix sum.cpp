#include<iostream>
using namespace std;
int main()
{
    int matA[3][3], matB[3][3], i, j, matC[3][3];
    cout<<"Enter Elements of First Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>matA[i][j];
    }
    cout<<"Enter Elements of Second Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>matB[i][j];
    }
    cout<<"\n sum of matrices\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            matC[i][j] = matA[i][j]+matB[i][j];
    }
       cout<<"Result of Two Given Matrix is:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<matC[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
