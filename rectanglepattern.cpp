#include<iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int row;
    int col;
    cout<<"ENter the number of row: ";
    
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>col;
    for ( i = 1; i <= row; i++)
    {
        for ( j = 1; j <= col; j++)
        {
            cout<<"*";
        }  
        cout<<endl;
    }
    
    return 0;
}