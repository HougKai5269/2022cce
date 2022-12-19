#include <stdio.h>
int main()
{
    printf("A的值是%d\n",'A');
    printf("B的值是%d\n",'B');
    printf("C的值是%d\n",'C');

    for(int c='D';c<='Z';c++)
    {
        printf("%c的值是%d\n",c,c);
    }
}
