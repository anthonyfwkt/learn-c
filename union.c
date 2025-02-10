#include <stdio.h>

union quantity {
  short count;
  float weight;
  float volume;
};
int main(void){
    union quantity q;
    q.count=1;
    printf("count is %i\n", q.count);
    q.weight =3.1423;
    printf("count is %f\n", q.weight);
    q.volume=3.14;
    printf("count is %f\n", q.volume);



}