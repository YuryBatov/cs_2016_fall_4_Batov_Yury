#include <stdio.h>
#include <string.h>
char reverse( char *c)
{
    int j=0,i,n;
    char b[1000];
    n=strlen(c);
    for(i=n-1;i>=0;--i)
    {
       b[j]=c[i];
       j++;
    }
    for(i=0;c[i]!='\0';++i)
    {
       c[i]=b[i];
    }
    return *c;
}
int main()
{
    int i;
    char a[1000];
    gets(a);
    reverse(a);
    for( i=0;a[i]!='\0';++i)
        {
        printf("%c",a[i]);
        }
    return 0;
}
