#include<stdio.h>
struct Status
{
    // boolean 
    // 定义位域
    unsigned int boolean :1;
    /* data */
};
//为了代码整洁吧
typedef struct Status Sta;
void printStatus(struct Status status)
{
    printf("%s\n",status.boolean==1?"true":"flase");
}

int main(int argc, char const *argv[])
{

    Sta sta;
    printStatus(sta);
    struct Status status = {1};
    printStatus(status);
    /* code */
    return 0;
}
