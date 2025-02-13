#include <stdio.h>

int main(void){
    fprintf(stdout, "Hello, world!\n");
    fprintf(stderr, "Something number.\n");


    FILE* fp;
    fp=fopen("hello.txt","w");
    fprintf(fp, "Sum: %d\n", 1);
}