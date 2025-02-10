#include <stdio.h>

struct turtle
{
    /* data */
    char* name;
    char* species;
    int age;

};

void happy(struct turtle* t){
    t->age+=1;
}
int main(void){
    struct turtle myT={"myT","sea turtle",99};
    happy(&myT);
    printf("Age is %i\n", myT.age); // 输出 99
    return 0;
}