#include <stdio.h>
#include <string.h>
#include <locale.h>
int rightrot(int x,int n)
{
return (x>>n);
}
int main()
{
    setlocale(LC_ALL,"Rus");
    int b,h,f;
    printf("Введите число\n");
    scanf("%d",&b);
    printf("Введите разряд\n");
    scanf("%d",&h);
    f=rightrot(b,h);
    printf("%i",f);
    return 0;
}
