#include<iostream>
using namespace std;
int main()
{
    int savings;
    cout<<"How much savings do you have? ";
    cin>>savings;
    if (savings>5000)
    {
        if (savings>10000)
        {
            cout<<"Road trip with Natasha";
        }
        else
        {
            cout<<"Shooping with Natasha";
        }
    }
    else
    {
        if (savings>2000)
        {
            cout<<"Dinner with Anjali";
        }
        else
        {
            cout<<"Chill with friends";
        }
        
        
    }
    
    
    return 0;
}