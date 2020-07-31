#ifndef __A__
#define __A__
class A
{
private:
    /* data */
public:
    A(/* args */);
    ~A();
};

A::A(/* args */)
{
}

A::~A()
{
}

#endif


#ifndef __COMPLEX__
#define __COMPLEX__
class Complex
{
private:
    double re,im;
    /* data */
public:
    double real() const {return re;}
    double imag() const {return im;}
    Complex(/* args */);
    Complex(double r = 0, double i = 0)
        : re(r),im(i)
        {
            
        }
    ~Complex();
};

Complex::Complex(/* args */)
{
}

Complex::~Complex()
{
}

#endif

#ifndef __CASTLE__
#define __CASTLE__
class Castle
{
private:
    string castleName;
    /* data */
public:
    Castle();
    ~Castle();
    string getCastleName() const {
        return castleName;
    };
};

Castle::Castle()
{
    castleName = "this is castleName";
}

Castle::~Castle()
{
}
#endif




class Postcard
{
private:
    /* data */
public:
    Postcard(/* args */);
    ~Postcard();
};

Postcard::Postcard(/* args */)
{
}

Postcard::~Postcard()
{
}

class Brick
{
private:
    /* data */
public:
    Brick(/* args */);
    ~Brick();
};

Brick::Brick(/* args */)
{
}

Brick::~Brick()
{
}

class Activity
{
private:
    /* data */
public:
    Activity(/* args */);
    ~Activity();
};

Activity::Activity(/* args */)
{
}

Activity::~Activity()
{
}




