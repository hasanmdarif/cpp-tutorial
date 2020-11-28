#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number to be added: ";
    cin>>n;
    int sum = 0;
    // For loop
    for (int i = 1; i <=n; i++)
    {
        sum = sum+i;
        
    }
    cout<<"Sum of "<<n<<" consecutive numbers is: "<<sum<<endl;

    
    // while loop
    int num;
    cout<<"Enter the number to be multiplied: ";
    cin>>num;
    int mult = 1;
    int j = 1;
    while (j<=num)
    {
        mult = mult * j;
        j = j + 1;
    }
    cout<<"multiplications of "<<num<<" consecutive numbers is: "<<mult;
    return 0;
}

