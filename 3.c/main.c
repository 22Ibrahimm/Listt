#include <stdio.h>
#include <stdlib.h>
#include "list.h"
void display(int e){
    printf("%i\n",e);
}
int  DataOfTheMiddleNode (int *pe,list *pl)
{
    if(pl==NULL||pe==NULL)
        return -1;
    else{
            ListNode *p;
            int i;

        for(p=pl->head,i=0;i<(pl->size/2);++i){
            p=p->next;
        }
        *pe=p->item;
        return 1;
    }
}
int main()
{
     list l;
    CreateList(&l);
    insert(0,10,&l);
    insert(1,11,&l);
    insert(2,12,&l);
    insert(3,13,&l);
    insert(4,14,&l);
    int x;
    DataOfTheMiddleNode(&x,&l);
    printf("%i\n",x);
    return 0;
}
