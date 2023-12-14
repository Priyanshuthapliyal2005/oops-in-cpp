#include<iostream>
using namespace std;

class increment{
    private:
        int num;
    public:
        increment(int n=0){
            num=n;
        }
        void operator++(int){
            num++;
        }
        void operator++(){
            ++num;
        }
        void display(){
            cout<<num<<endl;
        }
};
int main()
{
    increment i1(5);
    cout<<"Object Value:"<<endl;
    i1.display();
    i1++;
    cout<<"After Post Increment:"<<endl;
    i1.display();
    cout<<"After Pre Increment:"<<endl;
    ++i1;
    i1.display();
    return 0;
}