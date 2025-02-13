#include <stdio.h>
int main(void){
    FILE* fp;
    fp=fopen("hello.txt","r");
    char* words;
    while(fscanf(fp, "%s", words) == 1){
         puts(words);
    }
 
}