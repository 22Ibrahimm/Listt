#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
typedef struct ListNode{
int item;
struct ListNode *next;
}ListNode;

typedef struct{
ListNode *head;
int size;
}list;

int CreateList(list *pl);
int ListSize(list *pl);
int  ClearList(list *pl);
int insert(int pos,int e,list *pl);
int DisplayList(list *pl,void (*pf)(int));
int DeleteNode(int pos,int *pe,list *pl);
int RetrieveList(int pos,int *pe,list *pl);
int ReplaceList(int pos,int e,list *pl);


#endif // LIST_H_INCLUDED
