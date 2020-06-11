#include<stdio.h>

// 字符串可以使用char *
struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
    /* data */
} book;
// 这个book变量的作用范围需要考虑一下，方法里边的book没有影响吗？

struct 
{
    int a;
    char b;
    double c;
    /* data */
} s1={1,'a',1.1};


struct SIMPLE
{
    int a;
    char b;
    double c;
    /* data */
};

typedef struct 
{
    int a;
    int b;
    double c;
    /* data */
}Simple2;


struct  COMPLEX
{
    char string[100];
    struct SIMPLE a;
};


struct NODE
{
    char string[100];
    struct NODE * next_node;
};

struct test01
{
    /* data */
};

// 不完全声明
struct B;




struct A
{
    struct A * partner;
};




// Simple2 u1,u2[20],*u3;
int main(int argc, char const *argv[])
{ 
    /* code */
    struct Books book = {"c lang","runoob","prog",12};
    printf("this book %s  \n",book.author);
    printf("this s is %d  \n",s1.a);
    return 0;
}
