#include <stdio.h>

int x=1,i=1;
int main(void)
{
    int width=13,height=14;
    printf("width(%2d) * weight(%2d) :  %2d \n",width,height,width*height);
    printf("%i\n",x);  
printf("%i\n",i);  
    {
        int i=2;
        {
            int i=3;
printf("%i\n",i);  
        }
        printf("%i\n",i);  
    }
printf("%i\n",i);  

for (int i = 0; i < 100; i++)
{
    printf("%i\n",i);  
}

}