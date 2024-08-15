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
    int x=ListSum(&l);
    printf("x=%i\n",x);
    return 0;
}
