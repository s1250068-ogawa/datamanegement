#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){

  char name[10];
  printf("What is your name?\n>");
  scanf("%s",name);
  printf("Hello, %s!\n", name);

  srand((unsigned)time(NULL));
  int d1 = rand()%6+1;
  int d2 = rand()%6+1;
  int total = d1 + d2;

  printf("Rolling the dice...\n");
  printf("Die 1: %d\n", d1);
  printf("Die 2: %d\n", d2);
  printf("Total value: %d\n", total);

  if( total > 7 ) printf("%s won\n", name);
  else printf("%s lost\n", name);

  return 0;
}
