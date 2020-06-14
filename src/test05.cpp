#include<iostream>

class Box
{
private:
    double height;
    double breadth;
    double length;
    /* data */
public:
    /**
     */
    void setHeight(double h){
        height = h;
    }
    void setLength(double l){
        length = l;
    }
    void setBreadth(double b){
        breadth = b;
    }

    //
    Box(/* args */);
    ~Box();
};

Box::Box(/* args */)
{
}

Box::~Box()
{
}

// main method is not developed on the class
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
