#include<iostream>
using namespace std;

int main()
{

const char  *sub[7]={"discerte maths","cloud computing","DSA","php","data communication","linux","java programming"};
  cout<<"enter the subjects of your current semester"<<endl;
 
  cout<<"the sub are"<<endl;
 for(int j=0;j<7;j++)
 {
     cout<<j+1<<"."<<sub[j];
     cout<<endl;
 }

    return 0;

}