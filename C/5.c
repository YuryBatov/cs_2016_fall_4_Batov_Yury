#include <stdio.h>

int main(void) {
	int a,b,c;
	float k;
	a=0;
	b=400;
	c=5;
	while(a<b)
	{
	k=9.0 * (a+32.0) / 5.0;
	printf("%d %4.3f\n",a,k);
	a=a+c;
	}
	return 0;
}
