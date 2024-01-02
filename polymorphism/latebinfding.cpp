#include<iostream>
using namespace std;

class person {
public:
    // virtual void give() {
    //     cout << "BUN";
    // }
    virtual void give()=0;
};

class boy : public person {
public:
    void give() override {
        cout << " BROWN BUN " << endl;
    }
};

class girl : public person {
public:
    void give() override {
        cout << " PINK BUN " << endl;
    }
};

int main() {
    boy b1;
    girl g1;
    person* ptr = NULL;
    int n;

    while (true) {
        cout << "Enter the choice:\n1 for boy \n2 for girl \n0 to exit" << endl;
        cin >> n;

        if (n == 0) {
            cout << "Exiting program." << endl;
            break;
        }

        switch (n) {
        case 1:
            ptr = &b1;
            ptr->give();
            break;
        case 2:
            ptr = &g1;
            ptr->give();
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }

    return 0;
}
