#include <stdio.h>
#include <locale.h>
#include <math.h>

int rightrot(int x,int n)
{
    int i ,k=0;
    for(i=0;i<n;i++)
        {
            if((x%2) == 0)
            {
                k++;
                x=x/2;
                if(k == 1)
                    x=x*(-1);
            }
            else
            {
                k=0;
                x=x/2;
                x=x+pow(2,31);
            }
        }
        return x;
}

int main()
{
    setlocale(LC_ALL,"Rus");
    int b,h,f;
    printf("Введите число\n");
    scanf("%d",&b);
    printf("Введите разряд\n");
    scanf("%d",&h);
    printf("Результат %i\n",rightrot(b,h));
    return 0;
}
