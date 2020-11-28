// continue is used to skip to the next iteration of the loop.
// terminate the loop 
// print numbers from 1 to 100
// don't print the number which are divisible by 3
// 2. for break statement take an example to check prime number.


#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i <=100; i++)
    {
        if (i%3==0)
        {
            continue; // it skip the numbers which are divisible by 3.
        }
        
        cout<<i<<endl;
    }
    int n;
    int j;
    cout<<"Enter the number to check prime: ";
    cin>>n;
    for (j = 2; j < n; j++)
    {
        if (n%j==0)
        {
            cout<<"Non prime number";
            break;   //it terminates the loop
        }
        
    }
    if (j == n)
    {
        cout<<"prime number";
    }
    
    
    
    
    return 0;

}