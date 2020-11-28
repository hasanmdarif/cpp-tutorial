#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int choice;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<endl;
    cout<<"Enter the second Number: ";
    cin>>b;
    cout<<endl;
    cout<<"What operation do you want to perform?"<<endl;
    cout<<"(Press 1 for addition, press 2 for substraction, press 3 for multiplication, press 4 for division)"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b;
        break;
    case 2:
        cout<<"Substraction of "<<a<<" and "<<b<<" is "<<a-b;
        break;
    case 3:
        cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b;
        break;
    case 4:
        cout<<"Division of "<<a<<" and "<<b<<" is "<<a/b;
        break;
    
    default:
        cout<<"please press the right key";
        break;

    }
    return 0;
}