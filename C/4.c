#include <stdio.h>
#define SWAP(t,x,y) t z = x; x = y; y = z;
int main(void) {
    int a,b;
    scanf("%d %d",&a,&b);
    SWAP(int,a,b);
    printf("%d %d", a,b);
    return 0;
}
