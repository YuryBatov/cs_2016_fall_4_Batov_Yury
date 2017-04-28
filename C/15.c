#include <stdio.h>


int main(void) {
    char a[100] ;
    int i,j;
        gets(a);
    for(j=0;a[j]!='\0';j++)
    {
        if(a[j]==a[j+1])
            continue;
        printf("%c",a[j]);
    }

	return 0;
}
