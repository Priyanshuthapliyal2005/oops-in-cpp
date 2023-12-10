#include <iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion()=0;

};

class Employee:AbstractEmployee
{
private:
    string Company;
    int Age;
protected:
     string Name;
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
    void AskForPromotion(){
        if(Age>30)
            cout<<Name<<" got promoted "<<endl;
        else   
            cout<<Name<<" ,sorry NO promotion for you "<<endl;
    }
    virtual void Work(){
        cout<<Name<<" is checking e-mail,task bavklog,performing tasks,... "<<endl;
    }

};
class Developer:public Employee{
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age,string favProgrammingLanguage):Employee(name,company,age)
    {
        FavProgrammingLanguage=favProgrammingLanguage;
    
    }
    void FixBug(){
        cout<<Name<<" fixed bug using "<<FavProgrammingLanguage<<endl;
    }
    void Work(){
        cout<<Name<<" is Writing  "<<FavProgrammingLanguage<<" code "<<endl;
    }
};
class Teacher:public Employee{
public:
    string Subject;
    void PrepareLesson(){
        cout<<Name<<" is preparing "<<Subject<<" lesson "<<endl;
    }
    Teacher(string name, string company, int age,string subject):Employee(name,company,age)
    {
        Subject=subject;
    }
    void Work(){
        cout<<Name<<" is teaching "<<Subject<<endl;
        }
};
/*
    the most common use of polymorphism is When a parent class reference is used to refer to a child class object
*/
int main()
{
    Developer d=Developer("suzi", "geu", 19,"c++");
    Teacher t=Teacher("John","kvs",45,"cs");
    d.Work();
    t.Work();

    Employee *e1=&d;
    Employee *e2=&t;

    e1->Work();
    e2->Work();

    return 0;
}
