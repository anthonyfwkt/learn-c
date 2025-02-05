#include <stdio.h>
int main(void){
    int x;x=1;
    if (x>0)
    {
        printf("positive\n");
    }
    if(x<0){
        printf("negative\n");
    }
    printf("x的值为: %5d",x);
    return x;
   
}