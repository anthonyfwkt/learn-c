#include <stdio.h>

int main(void){
char words[14];

puts("Enter a string, please.");
fgets(words, 14, stdin);

puts("This is your string:");
fputs(words, stdout);
}