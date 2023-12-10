#include<iostream>
using namespace std;

const double PI{3.1415926535897932384626433832795};

class cylinder{
private:
    double radius{1};
    double height{1};
public:
    volume(){
        radius=2;
        height=2;
    }
    volume(double radius1,double height1){
            radius=radius1;
            height=height1;
    }
    double show(){
        return radius*radius*height*PI;
    }

};
int main()
{
    cylinder c1;
    cout<<"volume:"<<c1.show()<<endl;
    return 0;
}