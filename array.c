#include <stdio.h>
#include <string.h>

int main(void){


int* a;
int b[3] = {1, 2, 3};

memcpy(a,b,sizeof(b));
printf("%d\n",a[1]);
printf("%zu",a);
}