#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Enter any character: ";
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"Hello";
        break;
    case 'b':
        cout<<"Namaste";
        break;
    case 'c':
        cout<<"Salam";
        break;
    case 'd':
        cout<<"Sashryakal";
        break;
    
    default:
        cout<<"Please enter character between a to d.";
        break;
    }
    return 0;
}