#include<iostream>
using namespace std;
main()
{
int rows;
cout<<"Enter the number of rows=";//this input does two things 1) it specifies the number of rows 2) it specifies the number of stars in the starting row.
cin>>rows;
for (int i=rows;i>=1;i--)
{
    for (int j=1; j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}



}