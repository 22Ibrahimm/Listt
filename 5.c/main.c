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
    insert(1,50,&l);
    insert(2,12,&l);
   int max= MaximumDataList(&l);
   printf("max=%i\n",max);
    return 0;
}
