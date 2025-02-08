#include <stdio.h>
#include <string.h>


int my_strlen(char *s) {
  int count = 0;
  while (s[count] != '\0')
    count++;
  return count;
}

int main(void){
    // char* s="Hello ,world";
    char s[]="hello,world!";
    printf("%zd\n",my_strlen(s));


    char s1[]="hello,world";
    char s2[100];
    strcpy(s2,s1);

    s2[0]='z';
    printf("%s\n", s1);  // "Hello, world!"
    printf("%s\n", s2);  // "zello, world!"


    char str1[]="hello";
    char str2[]="world ddddd!";

    strncat(str1,str2,16);
    printf("%s\n", str1); 


    printf("%d\n", strcmp(str1,str2)); 
}