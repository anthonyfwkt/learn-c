#include <stdio.h>

int main(void){
    FILE *fp;
    fp = fopen("hello.txt", "r");

    int c;
    while ((c = getc(fp)) != EOF)
        printf("%c", c);

    fclose(fp);
}