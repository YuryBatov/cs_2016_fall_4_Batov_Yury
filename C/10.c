#include <stdio.h>
#include <locale.h>
#include <math.h>

int rightrot(unsigned int x,int n)
{
    int i;
    n=n%32;
    for(i=0;i<n;i++)
        {
            if((x%2) == 0)
            {
                x=x/2;
            }
            else
            {
                x=x/2;
                x=x+pow(2,31);
            }
        }
    return x;
}

int main()
{
    setlocale(LC_ALL,"Rus");
    int h;
    unsigned int b;
    printf("Введите число\n");
    scanf("%d",&b);
    printf("Введите разряд\n");
    scanf("%d",&h);
    printf("Результат %u\n",rightrot(b,h));
    return 0;
}
