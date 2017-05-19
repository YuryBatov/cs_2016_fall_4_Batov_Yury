void Diff(float x1,float x2,float h)
{
    float dif3 = 0,xi=0;
    int i;
    printf("%f\n",1/(2*h)*(-3*x1*x1+4*pow(x1+h,2)-pow(x1+2*h,2)));
    printf("%f\n",1/(2*h)*(pow(x1+2*h,2)-x1*x1));
    xi=x1;
    while(xi<=x2)
        {
            printf("%f\n",1/(2*h)*(xi*xi-4*pow(xi+h,2)+3*pow(xi+2*h,2)));
            xi=xi+h;
        }
}
int main(void)
{
    double dia1 , dia2, x1 ;
    setlocale(LC_ALL,"Rus");
    printf("Введите начало диапазона(функция y=2x)");
    scanf("%lf",&dia1);
    printf("Введите конец диапазона ");
    scanf("%lf",&dia2);
    printf("Введите шаг ");
    scanf("%lf",&x1);
    Diff(dia1,dia2,x1);
    return 0;
}
