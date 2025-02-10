#include <stdio.h>

// int main(void){
//     int len=0;
//     while (getchar() != '\n'){
//         len++;
//         putchar(len);
//     }
//     printf("%d",len);
// }



int main(int argc, char const *argv[])
{
    int len = 0;
    while(getchar() != '\n')
    {
        len++;
        puts(len);
    }

    
    return 0;
}
