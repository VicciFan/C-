#include <stdlib.h>
#include <stdio.h>
typedef struct node
{
 int data;
 struct node *next;
}LNode;

main()
{
 LNode* Create(int,int);
 LNode* GetNode(LNode *);
 int Print(LNode *,int);
 LNode *p;
 int n,k,m;
 do
 {
  scanf ("%d",&n);
 }while (n<=0);
 k=1;
 m=3;
 p=Create(n,k);
 Print(p,m);
 return 0;
};

LNode* Create(int n,int k)
{
 int start=k-1;
 LNode *s,*p,*L=0,*t;
 if (start==0) start=n;
 while (n!=0)
 {
  s=(LNode *)malloc(sizeof(LNode));
  if (L==0) p=s;
  if (n==start) t=s;
  s->data=n;
  s->next=L;
  L=s;
  n--;
 }
 p->next=L;
 return t;
}

LNode* GetNode(LNode *p)
{
 LNode *q;
 for (q=p;q->next!=p;q=q->next);
 q->next=p->next;
 free (p);
 return (q);
}

int Print(LNode *p,int m)
{
 int i;
 while (p->next!=p)
 {
  for (i=1;i<=m;i++)
   p=p->next;
  p=GetNode(p);
 }
 printf("%d",p->data);
 return 0;
}
