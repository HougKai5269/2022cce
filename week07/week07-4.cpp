#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    printf("千元的:%d\n",n/1000);
    n=n%1000;

    printf("百元的:%d\n",n/100);
    n=n%100;

    printf("十元的:%d\n",n/10);
}
