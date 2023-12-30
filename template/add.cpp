#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template<typename T>
T add(T a, T b)
{
    return a + b;
}

template<typename T>
T add(T a, T b, T c)
{
    return a + b + c;
}


int main()
{
    int n;
    cout <<"ENTER \n1: for addition of two numbers \n2: for addition of three numbers\n0: for exiting the program \n";
    cin>>n;
    while(n>=0)
    {
        switch(n)
        {
            case 1:
            {
                int a,b;
                cout<<"Enter two numbers: ";
                cin>>a>>b;
                cout<<"Sum of two numbers is: "<<add(a,b)<<endl;
                break;
            }
            case 2:
            {
                int a,b,c;
                cout<<"Enter three numbers: ";
                cin>>a>>b>>c;
                cout<<"Sum of three numbers is: "<<add(a,b,c)<<endl;
                break;
            }
            case 0:
            {
                cout<<"Exiting..."<<endl;
                return 0;
            }

            default:
            {
                cout<<"Invalid input"<<endl;
                break;
            }
        }
        cout <<"ENTER \n1: for addition of two numbers \n2: for addition of three numbers \n";
        cin>>n;
    }
    return 0;
}