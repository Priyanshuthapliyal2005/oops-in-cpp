#include<iostream>
using namespace std;
class person{
    private:
        string name;
        int age ;
    public:
        person(string name="NULL",int age=0){
            this->name=name;
            this->age=age;
        }
        person(person &p1){
            name=p1.name;
            age=p1.age;
        }
        string getdata(){
            return name + " is " + to_string(age) + " years old.";
            
        }

};
int main()
{
    person p1("ramu",30);
    cout<<p1.getdata()<<endl;

    person p2(p1);
    cout<<p2.getdata()<<endl;
    return 0;
}