#include<iostream>
using namespace std;
int main()
{
    int n=2;
    int arr[2][2][2];
    int i,j,k;

    cout<<"enter the elements  of 2x2 array";

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                cin>>arr[i][j][k];
            }

        }
    }
    cout<<"the elements in row  major order are"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){

    cout<<"["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"]"<<"="<<arr[i][j][k]<<endl;
            }

        }
    }
    cout<<"the elements in column major order are"<<endl;
    for(i=0;i<n;i++){
        for(k=0;k<n;k++){
            for(j=0;j<n;j++){

    cout<<"["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"]"<<"="<<arr[i][j][k]<<endl;
            }

        }
    }
    return 0;
}   