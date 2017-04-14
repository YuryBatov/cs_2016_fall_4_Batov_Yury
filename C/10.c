#include <stdio.h>
#include <locale.h>

int pow(int a, int step)
{
    int i;
    int s=a;
	if (step == 0)
		return 1;
	for ( i=1; i<step; i++)
    {
        s*=a;
    }
    return s;
}

int rightrot(int x,int n)
{
    int c;
    c=n%32;
    n=32-c;
    return x=x*pow(2,n);
}

int main()
{
    setlocale(LC_ALL,"Rus");
    int b,h,f;
    printf("Введите число\n");
    scanf("%d",&b);
    printf("Введите разряд\n");
    scanf("%d",&h);
    printf("Результат %u\n",rightrot(b,h));
    return 0;
}
