#include<iostream>
#include<stdio.h>
using namespace std;

#define DAY 7
int main(int argc, char const *argv[])
{
    cout << "day is "<< DAY <<endl;
    const int day = 7;
    printf("the day is %d \n",day);
    cout<<"the day is " << day <<endl;

    short num1 = 10;
    int num2 = 10;
    long num3 = 10;
    long long num4 = 10;

    cout << "this num1 sizeof is "<< sizeof(num1) <<endl;
    cout << "this num2 sizeof is "<< sizeof(num2) <<endl;
    cout << "this num3 sizeof is "<< sizeof(num3) <<endl;
    cout << "this num4 sizeof is "<< sizeof(num4) <<endl;

    float num5 = 1.1;
    double num6 = 1.20;

    cout << "this num5 sizeof is "<< sizeof(num5) <<endl;
    cout << "this num6 sizeof is "<< sizeof(num6) <<endl;

    char ch1 = 'a';
    cout << "this ch1 sizeof is " << sizeof(ch1) << endl;



    // 注释
    /**
     * 多行注释
     */
    // 变量 数据类型 变量名 = 变量初始值
    int a = 10;
    cout << "a = " << a << endl;

    cout << "hello world"<<endl;
    return 0;
}
