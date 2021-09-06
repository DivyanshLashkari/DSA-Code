#include<iostream>
using namespace std;
int main()
{
int A[10][10],B[10][10],C[10][10];
int i,j,m,n,p,q;
cout<<"enter size of array A";
cin>>m>>n;
cout<<"enter size of array B";
cin>>p>>q;
cout<<"enter matrix A values";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cin>>A[i][j];
}
}
cout<<"enter elements of B";
for(i=0;i<p;i++){
    for(j=0;j<q;j++){
        cin>>B[i][j];
    }
    }
    
    for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
C[i][j]=(A[i][j])*(B[i][j]);
}
}
cout<<"the addition of matrix is";
for(i=0;i<p;i++){
    for(j=0;j<q;j++){
        cout<<C[i][j];
        cout<<endl;
    }
    }
return 0;
}