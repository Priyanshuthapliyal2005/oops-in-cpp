#include <iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion()=0;

};

class Employee:AbstractEmployee
{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        if (age >= 18)
            Age = age;
    }
    int getAge()
    {
        return Age;
    }
    void introduceyourself()
    {
        cout << "Name-" << Name << endl;
        cout << "Company-" << Company << endl;
        cout << "Age-" << Age << endl;
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    virtual void AskForPromotion(){
        if(Age>30)
            cout<<Name<<" got promoted "<<endl;
        else   
            cout<<Name<<" ,sorry NO promotion for you "<<endl;
    }

};

int main()
{
    Employee employee1 = Employee("suzi", "geu", 19);
    Employee employee2 = Employee("sukhi", "gehu", 40); 
   employee1.AskForPromotion();
   employee2.AskForPromotion();
    return 0;
}
