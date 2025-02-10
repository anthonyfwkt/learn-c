#include <stdio.h>
#include <string.h>

struct cat{char name[30]; short age;} a,b;

typedef struct dog{char name[30]; short age;}dog;




int main(void){
    strcpy(a.name,"hula");
    a.age=3;
    b=a;
    b.name[0]='M';
    printf("%s\n", a.name); // Hula
    printf("%s\n", b.name); // Mula


    dog c={"hula",5};
    dog d=c;
    d.name[0]='D';

    printf("%s\n", c.name); // Hula
    printf("%s\n", d.name); // Mula


}