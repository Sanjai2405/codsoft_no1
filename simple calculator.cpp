#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b;
    char ch;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"SIMPLE CALCULATOR"<<endl;
    cout<<"+\n-\n*\n/\nEnter your choice";
    cin>>ch;
    switch(ch)
    {
        case '+':
        {
            cout<<"Addition : "<<a<<" + "<<b<<" = "<<a+b;
            break;
        }
        case '-':
        {
            cout<<"Subraction : "<<a<<" - "<<b<<" = "<<a-b;
            break;
        }
        case '*':
        {
            cout<<"Multiplication : "<<a<<" * "<<b<<" = "<<a*b;
            break;
        }
        case '/':
        {
            cout<<"Division : "<<a<<" / "<<b<<" = "<<a/b;
            break;
        }
        default:
        {
            cout<<"Enter a valid input.";
            break;
        }
    }
    return 0;
}
