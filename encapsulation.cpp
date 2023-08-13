#include <iostream>
using namespace std;

class Employee
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

};

int main()
{
    Employee employee1 = Employee("suzi", "geu", 19);
    employee1.introduceyourself();

    Employee employee2 = Employee("sukhi", "gehu", 40);
    employee2.introduceyourself();
    
    employee1.setAge(8);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;
    
    return 0;
}
