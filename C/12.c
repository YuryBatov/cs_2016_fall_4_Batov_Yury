#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void) {
    char a[100];
    int k=0,c,i,n;
    gets(a);
    n=strlen(a);
    c=(int)a[0];
    for(i=0;i<n;i++)
    {
        if((int)a[i]>c)
    {
        c=(int)a[i];
        k=i;
    }
    }
    printf("%c",a[k]);
	return 0;
}
