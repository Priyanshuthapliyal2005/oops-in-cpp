#include <iostream>
using namespace std;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

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
};

int main()
{
    Employee employee1 = Employee("suzi", "geu", 19);
    employee1.introduceyourself();

    Employee employee2 = Employee("sukhi", "gehu", 40);
    employee2.introduceyourself();

    return 0;
}
