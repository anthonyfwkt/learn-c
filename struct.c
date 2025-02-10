#include <stdio.h>
#include <string.h>


struct fraction {
  int numerator;
  int denominator;
};

typedef  struct cell_phone
{
    int cell_no;
    float minutes_of_charge;
} phone;


int main(void){

struct fraction f={ 1,2};
printf("%d\n",f.numerator);
printf("%d\n",f.denominator);

phone p={12345,5};
printf("%d\n",p.cell_no);
printf("%f\n",p.minutes_of_charge);

}