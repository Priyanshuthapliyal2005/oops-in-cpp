#include<iostream>
using namespace std;

class mobile {
private:
    string name;
    int price;
public:
    mobile(string n = "NULL", int p = 0) : name(n), price(p) {
    }
    mobile(mobile& m1) {
        name = m1.name;
        price = m1.price;
    }
    void getmobiledata();
};

void mobile::getmobiledata() {
    cout << endl << "Name: " << name << " has price " << price << endl;
}

int main() {
    mobile m1("iphone", 51000);
    m1.getmobiledata();

    mobile m2("iphone", 45000);
    m2.getmobiledata();  

    return 0;
}
