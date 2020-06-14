#include<stdio.h>
#include<string.h>
#include"test02.h"


int main(int argc, char const *argv[])
{
    union Data data ;//= {1,0.23f,"hello world"};
    data.i =1;
    data.f = 1.23;
    // 不能直接赋值
    // data.str = "hello world"; 
    strcpy(data.str,"hello world");
    data.f = 1.23;
    printData(data);
    /* code */
    return 0;
}

void printData(union Data data)
{
    printf("the data's i is %d \n\
    the data's f is %.2f \n\
    the data's str is %s \n",
    data.i,
    data.f,
    data.str);
}
