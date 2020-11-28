// print all prime numbers from 2 to n

#include<iostream>
using namespace std;
int main()
{
    int n;
    int a;
    cout<<"Enter the numbers: ";
    cin>>a;
    cin>>n;
    for (int num = a; num <= n;num++)
    {
        int i ;
         for (int i = 2; i < num; i++)
        {
            if (num%i==0)
            {
                break;
            }
        }
        if (i == num)
        {
            cout<<num<<endl;
        }
    }
    
    return 0;
    
    
}