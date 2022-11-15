#include <stdio.h>
int main()
{
    int a[10]={90,80,70,60,50,40,30,20,10,0};
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10-1;j++)
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    for(int i=0;i<10;i++)printf("%d ",a[i]);
    printf("\n");
}
