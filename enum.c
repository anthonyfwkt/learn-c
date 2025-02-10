#include <stdio.h>



int main(void){
    typedef enum {
  SHEEP,
  WHEAT,
  WOOD,
  BRICK,
  ORE
} RESOURCE;
printf("%d", SHEEP);
enum { ONE, TWO };
printf("%d %d", ONE, TWO);  // 0 1
}