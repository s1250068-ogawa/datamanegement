#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){

  srand((unsigned)time(NULL));
  int d1 = rand()%6+1;
  int d2 = rand()%6+1;
  int total = d1 + d2;

  printf("Rolling the dice...\n");
  printf("Die 1: %d\n", d1);
  printf("Die 2: %d\n", d2);
  printf("Total value: %d\n", total);

  return 0;
}
