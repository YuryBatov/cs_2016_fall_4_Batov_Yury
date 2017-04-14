#include <stdio.h>
#include <string.h>

int main()
{
    int i,b[1000],j=0,k=0,x,max,p,l;
    char c[1000];
    gets(c);
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]==' ')
        {
            b[j]=k;
            j++;
            k=0;
        }
        else
            k++;
        if(c[i+1]=='\0')
        {
            b[j]=k;
            j++;
            k=0;
        }
    }
    max=b[0];
    for(i=0;i<j;i++)
    {
        if(b[i]>max)
            max=b[i];
    }
    l=max;
    for(i=0;i<max;++i)
    {
        for(x=0;x<j;x++)
        {
            if((b[x]-l)>=0)
                printf("G ");
            else
                printf("  ");
        }
        printf("\n");
        l--;
    }
    return 0;
}
