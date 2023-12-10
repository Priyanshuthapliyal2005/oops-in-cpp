#include<iostream>
using namespace std;

const double PI{3.1415926535897932384626433832795};

class cylinder{
public:
    double volume(){
        return PI*base_radius*base_radius*height;
    }
    double base_radius{1};
    double height{1};

};
int main()
{
    cylinder c1;
    cout<<"volume:"<<c1.volume()<<endl;
    return 0;
}