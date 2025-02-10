#include <stdio.h>

#define TWO 2
#define FOUR TWO*TWO

#if 1
    const double pi = 3.1415;
#endif

int main(void){
    printf("%d\n", FOUR);

    printf("%f",pi);

    printf("This function: %s\n", __func__);
    printf("This file: %s\n", __FILE__);
    printf("This line: %d\n", __LINE__);
    printf("Compiled on: %s %s\n", __DATE__, __TIME__);
    printf("C Version: %ld\n", __STDC_VERSION__);
}