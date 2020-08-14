#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
main()
{
    int a=30,b=10;
    int (*func)(int,int)=add;
    printf("sum of nums: %d\n",func(a,b));
    int (*func1)(int,int)=sub;
    printf("diff of nums: %d\n",func1(a,b));

}
