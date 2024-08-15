#include <stdio.h>
#include <stdlib.h>
#include "list.h"
void display(int e){
    printf("%i\n",e);
}
int DeleteNodeWithValue(int value, list *pl) {
    if (pl == NULL || pl->head == NULL) {
        return -1;
    }

    ListNode *p, *q;
    p = pl->head;
    if (p->item == value) {
        pl->head = p->next;
        free(p);
        pl->size--;
        return 1;
    }
    while (p->next != NULL && p->next->item != value) {
        p = p->next;
    }

    if (p->next == NULL) {
        return 0;
    }
    q = p->next;
    p->next = q->next;
    free(q);
    pl->size--;
    return 1;
}

int main()
{
    list l;
    CreateList(&l);
    insert(0,10,&l);
    insert(1,11,&l);
    insert(2,12,&l);
    DeleteNodeWithValue(10,&l);  //delete the first node.
    DeleteNodeWithValue (12,&l);//delete the last node.
    DeleteNodeWithValue (11,&l);//delete the middle node.


    DisplayList(&l,display);
    return 0;
}
