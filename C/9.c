#include <stdio.h>

int r(int a)
{
	if(a==1||a==0)
		return 1;
	else
		return r(a-1)+r(a-2);
}
int main(void) {
        int N,i;
        scanf("%d",&N);
        for(i=0;i<N;++i)
        printf("%d ",r(i));
	return 0;
}
