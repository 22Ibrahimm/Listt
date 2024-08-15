#include <stdio.h>
#include <stdlib.h>
#include "list.h"
int CreateList(list *pl)
{
if(pl==NULL){
    return -1;
}
else{
    pl->head=NULL;
    pl->size=0;
    pl->sum=0;
    return 1;

}
}
int ListSize(list *pl)
{
if(pl==NULL){
    return -1;
}
else{
    return pl->size;
}
}
int  ClearList(list *pl)
{
    if(pl==NULL){
    return -1;
}
else{
    ListNode *pn;
    while(pn){
        pn=pl->head->next;
        free(pl->head);
        pl->head=pn;
    }
    pl->size=0;
        return 1;
}
}
int insert(int pos,int e,list *pl)
{
    if(pl==NULL){
    return -1;
}
else{
    ListNode *p,*q;
  if(p = (ListNode*)malloc(sizeof(ListNode))){
    if(p==NULL){
        return -1;
    }
    else{
        p->item=e;
        p->next=NULL;
        if(pos==0){
            p->next=pl->head;
            pl->head=p;
        }
        else{
                int i;
            for(i=0,q=pl->head;i<pos-1;++i){
                q=q->next;
            }
            p->next=q->next;
            q->next=p;
        }
    }
    pl->sum+=e;
    pl->size++;
        return 1;
  }
  else{
    return 0;
  }
}
}
int DisplayList(list *pl,void (*pf)(int))
{
    if(pl==NULL||pf==NULL){
        return -1;
    }
    else{
        ListNode *p=pl->head;
        if (p == NULL) {
            printf("List is empty\n");
            return -1;
        }
        else{
            while(p){
                (*pf)(p->item);
                p=p->next;
            }
        }
        return 1;
}
}
int DeleteNode(int pos,int *pe,list *pl)
{
if( pe==NULL || pl == NULL ){
    return -1;
}
    if(pl->size==0){
        printf("List Is Empty\n");
        return -1;
    }
    ListNode *p,*q;
    if(pos==0){
        *pe=pl->head->item;
        pl->sum-=pl->head->item;
        p=pl->head->next;
        free(pl->head);
        pl->head=p;
    }
    else{
        int i;
        for(q=pl->head,i=0;i<pos-1;++i){
            q=q->next;
        }
        *pe=q->next->item;
        pl->sum-=q->next->item;
        p=q->next->next;
        free(q->next);
        q->next=p;
    }
    pl->size--;
    return 1;
}

int RetrieveList(int pos,int *pe,list *pl)
{
    if( pe==NULL || pl == NULL ){
    return -1;
}
else{
        if(pl->size==0){
            printf("List Is Empty\n");
            return -1;
        }
        else{
            ListNode *p;
        int i;
        for(p=pl->head,i=0;i<pos;++i){
            p=p->next;
        }
        *pe=p->item;
        }
        return 1;
}
}
int ReplaceList(int pos,int e,list *pl)
{
      if(pl == NULL){
    return -1;
}
else{
        if(pl->size==0){
            printf("List Is Empty\n");
            return -1;
        }
        else{
            ListNode *p;
        int i;
        for(p=pl->head,i=0;i<pos;++i){
            p=p->next;
        }
        p->item=e;
        }
return 1;
}
}
int ListSum(list *pl)
{
if(pl==NULL){
    return -1;
}
else{
    return pl->sum;
}
}
