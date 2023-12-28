#include<iostream>
using namespace std;
class person{
    public:
        virtual void give(){
            cout<<"BUN";
        }
};

class boy:public person{
    public :
        void give(){
            cout<<" BROWN BUN "<<endl;
        }
};

class girl : public person{
    public:
        void give(){
            cout<<" PINK BUN "<<endl;
        }
};

int main()
{
    boy b1;
    girl g1;
    person *ptr=NULL;
    int n;
    cout<<"Enter the choice:\n1 for boy \n2 for girl "<<endl;
    cin>>n;
    switch (n)
    {
    case 1:
        ptr=&b1;
        ptr->give();
        break;
    case 2:
        ptr=&g1;
        ptr->give();
        break;
    default:
        break;
    }
    return 0;
}