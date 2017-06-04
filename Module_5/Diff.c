#include <stdio.h>
#include <locale.h>
float Funktion(float x)
{
    return x*x;
}
void Diff(float x1,float x2,float h)
{
    float dif3 = 0,xi=0;
    int i;
    printf("%f\n",1/(2*h)*(-3*Funktion(x1)+4*Funktion(x1+h)-Funktion(x1+2*h)));
    printf("%f\n",1/(2*h)*(Funktion(x1+2*h)-Funktion(x1)));
    xi=x1;
    while(xi+2*h<=x2)
        {
            printf("%f\n",1/(2*h)*(Funktion(xi)-4*Funktion(xi+h)+3*Funktion(xi+2*h)));
            xi=xi+h;
        }
}
int main(void)
{
    double dia1 , dia2, x1 ;
    setlocale(LC_ALL,"Rus");
    printf("Введите начало диапазона(функция y=x^2)");
    scanf("%lf",&dia1);
    printf("Введите конец диапазона ");
    scanf("%lf",&dia2);
    printf("Введите шаг ");
    scanf("%lf",&x1);
    Diff(dia1,dia2,x1);
    return 0;
}
