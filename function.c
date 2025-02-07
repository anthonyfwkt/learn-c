#include <stdio.h>
#include <stdlib.h>

int plus_one(int n){
    return n+1;
}

unsigned long Fibonacci(unsigned n) {
  if (n > 2)
    return Fibonacci(n - 1) + Fibonacci(n - 2);
  else
    return 1;
}


void increment(int a) {
  a++;
}


void Swap(int* x, int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void print(int a){
    printf("%d\n",a);
}

void (*print_ptr)(int)=&print;


int twice(int);


void printw(void) {
  printf("something wrong!\n");
}



int main(void)
{
    int res=twice(5);
     printf("%d\n",res);

     atexit(printw);

    for (int i = 0; i < 100; i++)
    {
     printf("%d\n",i);
    if (i==50)
    {
        exit(EXIT_FAILURE);

    }
        
    }
}

int twice(int num)
{
    return 2*num;
    
}