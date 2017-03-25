#include <stdio.h>
#include <locale.h>
float func(int n)
{
    int i=0;
    float a[100],l,h;
    printf("Введите элементы массива\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    i=0;
    l=a[0];
    h=a[0];
    while(i<n){
        if(l>a[i])
        {
            l=a[i];
        }
        if(h<a[i])
        {
            h=a[i];
        }
        i++;
    }
    return h-l;
}
int main()
{
    setlocale(LC_ALL,"Rus");
    int N;
    printf("Ведите количество элементов массива\n");
    scanf("%d",&N);
    printf("Результат: %.2f",func(N));
    return 0;
}
