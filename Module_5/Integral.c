#include <stdio.h>
#include <locale.h>
//функция y=2*x
double Funktion(double x)
{
    return 2*x;
}
double Simpson(double a,double b,int n)
{
    int  i = 1;
    double c=0.0,integral=0.0,sum = 0.0,sum_1 = 0.0,h=0.0;
    h=(b-a)/n;
        c = a;
        while(c<b)
        {
            c=c+h;
            if(i%2!=0)
                {
                    sum=sum+Funktion(c);
                }
            else
                {
                    sum_1=sum_1+Funktion(c);
                }
                i++;
        }
        integral=h/3*(Funktion(a)+Funktion(b)+4*sum+2*sum_1);
    return integral;
}
int main(void)
{
    double dia1 , dia2, x1 ;
    int x;
    setlocale(LC_ALL,"Rus");
    printf("Введите начало диапазона(для функции y=2x) ");
    scanf("%lf",&dia1);
    printf("Введите конец диапазона ");
    scanf("%lf",&dia2);
    printf("Введите  количество разбиений: ");
    scanf("%i",&x);
    printf("Ответ: %lf\n",Simpson(dia1,dia2,x));
    return 0;
}
