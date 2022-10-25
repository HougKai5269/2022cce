#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int k=2;k<=a;k++)
    {
        int bad=0;
        for(int i=2;i<k;i++)if(k%i==0)bad=1;
        if(bad==0)printf("%d ",k);
    }
}
