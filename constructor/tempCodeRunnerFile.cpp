
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
    cylinder c1