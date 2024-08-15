#include <stdio.h>
#include <stdlib.h>
#include "list.h"
void display(int e){
    printf("%i\n",e);
}

int main()
{
  list l;
    CreateList(&l);
    insert(0,10,&l);
    insert(1,11,&l);
    insert(2,12,&l);
    DisplayList(&l,display);
    ReverseList(&l);
    printf("==========\n");
    DisplayList(&l,display);
    return 0;
}
