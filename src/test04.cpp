#include<iostream>
// 命名空间
using namespace std;
class Box
{
private:
    /* data */
public:
    double length;
    double breadth;
    double height;

    Box(/* args */);
    ~Box();
};

Box::Box(/* args */)
{
}

Box::~Box()
{
}

int main(int argc, char const *argv[])
{
    
    cout << "hello world" << endl;
    cout << "hello world" << "\n";
    // 声名之后直接赋值了，null呢？
    Box box1,box2;
    cout << "box1 is " << box1.breadth <<endl;
    // java 声明 null，只是栈空间的局部变量，这个声明直接在堆空间开辟了内存。

    double volume = 0.0;
    box1.breadth = 1.2;
    box1.height = 2.1;
    box1.length = 1.0;

    box2.breadth = 10.1;
    box2.height = 1.9;
    box2.length = 1.1;

    volume = box1.breadth * box1.height * box1.length;
    cout << "box1's volume is " << volume << endl;

    volume = box2.breadth * box2.height * box2.length;
    cout << "box2's volume is " << volume << endl;
    return 0;
}
