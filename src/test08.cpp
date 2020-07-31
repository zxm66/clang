#include<iostream>
#include<header/test08.h>

using namespace std;
int main(int argc, char const *argv[])
{
    int a = 1;
    char b = 'a';
    double c = 1.1;
    float d = 1.0f;
    long e = 11L;
    string f = "hello world";
    cout<< "hello world"<< '\n' << f <<endl;  
    //Castle * g = new Castle();
    //cout<< g->getCastleName() << endl; 
    Complex *complex = new Complex(1,1);
    cout << complex->imag() <<endl;
    return 0;
}
