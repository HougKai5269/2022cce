# 2022cce
# 第六週作業
## 1.建立畫星星時的鷹架:
```cpp
#include <stdio.h>
int main()
{
    for(int i=5;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            printf("*");
        }
        printf("i:%d星星\n",i);
    }
}
```
## 2.利用鷹架畫出星星:
```cpp
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        int space=5-i, star=2*i-1;
        for(int k=0;k<space;k++)printf(" ");
        for(int k=0;k<star;k++)printf("*");
        printf("\n");
    }
}
```
## 3.檢查數字是否可約分:
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個整數,要約分: ");
    int a,b;
    scanf("%d %d",&a,&b);
    int ans;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)ans=i;
    }
    printf("ans: %d 可約分",ans);
}
```
## 4.輾轉相除法:
```cpp
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    while(1)
    {
        c=a%b;
        printf("老大:%d 老二:%d 老三:%d\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案b: %d",b);
}
```
# 第七週作業
## 1.比較int and long long int:
```cpp
#include <stdio.h>
int main()
{
    int n=9876543210;
    printf("int 印出來 %d\n",n);

    long long int a=9876543210;
    printf("long long int 印出來 %lld\n",a);
}
```
## 2.利用long long int求最大公因數:
```cpp
#include <stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);

    long long int ans;
    for(long long int i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)ans=i;
    }
    printf("最大公因數是:%lld\n",ans);
}
```
## 3.利用輾轉相除法求最大公因數:
```cpp
#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld",&a,&b);
    while(1)
    {
        c=a%b;
        printf("a:%lld b:%lld c:%lld\n",a,b,c);
        if(c==0)break;
        a=b;
        b=c;
    }
    printf("答案是: %lld\n",b);
}
```
## 4.求出千元/百元/十元個別有多少:
```cpp
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
```
## 4b.求出各個個位數(需輸入9個數):
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    printf("現在的個位數是:%d\n",n%10);
    n=n/10;

    printf("現在的個位數是:%d\n",n%10);
    n=n/10;

    printf("現在的個位數是:%d\n",n%10);
    n=n/10;

    printf("現在的個位數是:%d\n",n%10);
    n=n/10;

    printf("現在的個位數是:%d\n",n%10);
    n=n/10;

    printf("現在的個位數是:%d\n",n%10);
    n=n/10;

    printf("現在的個位數是:%d\n",n%10);
    n=n/10;

    printf("現在的個位數是:%d\n",n%10);
    n=n/10;

    printf("現在的個位數是:%d\n",n%10);
    n=n/10;

    printf("現在的個位數是:%d\n",n%10);
    n=n/10;
}
```
# 第八週作業
## 1.判斷質數
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int bad=0;
    for(int i=2;i<n;i++)if(n%i==0)bad=1;
    if(bad==0)printf("%d 是質數",n);
    else printf("%d 不好,不是質數",n);
}
```
## 2.印出2~n的所有質數

```cpp
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
```
## 3.數字相加
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入 5個數字(要加起來): ");

    int n;
    int sum=0;
    for(int i=0;i<5;i++)
    {

        scanf("%d",&n);
        sum+=n;
    }
    printf("總和是:%d",sum);
}
```
## 4.三層for迴圈印出直角三角形
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
        for(int k=1;k<=n-i;k++)printf(" ");
        for(int k=1;k<=i;k++)printf("*");
        printf("\n");
	}
}
```
## 5.兩層for迴圈印出直角三角形
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
        for(int k=1;k<=n;k++)
        {
            if(k<=n-i)printf(" ");
            else printf("*");
        }
        printf("\n");
	}
}
```
## 6.兩層while迴圈印出直角三角形
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int i=1;
    while(i<=n)
    {
        int k=1;
        while(k<=n)
        {
            if(k<=n-i)printf(" ");
            else printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
}
```
