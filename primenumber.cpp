// print all prime numbers from 2 to n

#include<iostream>
using namespace std;
int main()
{
    int n;
    int a;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>n;
    cout<<"Prime numbers between "<<a<<" and "<<n<<" are "<<endl; 
    for (int num = a; num <= n;num++)
    {
        int i ;
         for (i = 2; i < num; i++)
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