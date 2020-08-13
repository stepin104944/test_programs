#include <stdio.h>
void prime(int);
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    prime(n);
}
void prime(int m)
{
    int i,flag=0;
    for (i = 2; i <= m/2; ++i)
        {

            if (m % i == 0)
                {
                flag = 1;
                break;
                }
        }

        if (flag == 0)
            printf("True");
        else
            printf("False");
        return 0;
}
