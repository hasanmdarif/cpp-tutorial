#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the three digits";
    cin>>a>>b>>c;
    cout<<"The entered numbers are:"<<endl<<a<<endl<<b<<endl<<c<<endl;
    if (a>b)
    {
        if (a>c)
        {
            cout<<a<<" is the greatest of three";
        }
        else
        {
            cout<<c<<" is the greatest of three";
        }
        
    }
    else
    {
        if (b>a)
        {
            if (b>c)
            {
                cout<<b<<" is the greatest of three";
            }
            else
            {
                cout<<c<<" is the greatest of three";
            }
            
            
        }
        
    }
    
    
}