#include <stdio.h>

int main(void){
    FILE *fp;
    fp = fopen("hello.txt", "a");
    for (int i = 0; i < 100; i++)
    {
        putc(i,fp);
    }
    fclose(fp);

    fp = fopen("hello.txt", "r");
    int c;
    while ((c = getc(fp)) != EOF)
        printf("%c", c);
    fclose(fp);
}