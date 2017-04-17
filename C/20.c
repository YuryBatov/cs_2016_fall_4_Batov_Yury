#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
FILE *X;
void XOR(char *str,char *key )
{
    int i,n;
    for(i=0;i<strlen(str);++i)
    {
        if(str[i]!=EOF)
        {
            n=i%strlen(key);
            str[i]^=key[n];
            fputc(str[i],X);
        }
    }

}
int main()
{
    setlocale(LC_ALL,"Rus");
    char stroka[10000]={0},m,s,key[100];
    int i=0,j;
    printf("Введите ключ: ");
    gets(key);
    FILE *C;
    C=fopen("output.txt","r");
    X=fopen("input.txt","w");
    while((stroka[i]=fgetc(C))!=EOF){
        i++;
    }
    XOR(stroka,key);
    printf("Ваш текст закодирован");
    return 0;
}
