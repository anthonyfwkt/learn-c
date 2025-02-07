#include <stdio.h>

int main(void)
{
int* p=NULL;


int i;
p=&i;
*p=13;

printf("%d\n",p);
printf("%d\n",*p);
printf("%d\n",&p);

}


void increment(int* p) {
  *p = *p + 1;
}