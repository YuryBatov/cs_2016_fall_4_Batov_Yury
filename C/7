#include <stdio.h>
int pow(int a,int b)
{
    int i ,x=1;
    for(i=0;i<b;++i)
        x=x*a;
    a=x;
    return a;
}


int main(void) {
	int m,n,p;
	char k;
	scanf("%d%c%d",&n,&k,&m);
	if(k=='+')
	printf("%d",n+m);
	if (k=='-')
	printf("%d",n-m);
	if (k=='*')
	printf("%d",n*m);
	if (k=='/')
	printf("%d",n/m);
	if (k=='%')
	printf("%d",n%m);
	if (k=='^')
	{
	p=pow(n,m);
	printf("%d",p);
	}
	return 0;
}
