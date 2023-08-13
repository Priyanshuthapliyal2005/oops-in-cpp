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
};

int main()
{
    Employee employee1;
     employee1.Name = "priyanshu";
     employee1.Company = "vs code";
     employee1.Age = 18;
    employee1.introduceyourself();

    Employee employee2;
     employee2.Name = "priyanshi";  
     employee2.Company = "vs";       
     employee2.Age = 19;            
    employee2.introduceyourself();
    return 0;
}
