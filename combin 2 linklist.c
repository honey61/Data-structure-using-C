#include<stdio.h>
#include<stdlib.h>


struct node
{ 
    int data;
    struct node * next;

};
struct node * head1;
struct node * head2;
void concatenate(struct node *head1,struct node *head2)
{
   
 struct node *ptr = NULL;
 ptr= head1;
 while(ptr-> next!= NULL){
    ptr= ptr->next;
 }
 ptr->next = head2;
    
}


 void travietion(struct node * p)
{
    printf("Elements after combining 1st and 2nd link list are =");
   while(p!=NULL)
   {
   printf(" %d ",p->data);
   p=p->next; 
   }
}
int main(){


 struct node *prev,*a, *b, *p ;
    int n,i;
  
    printf ("Enter the amount of element you want to insert in 1st link list :");
    scanf("%d",&n);
printf ("Enter the element of 1st link list :");
    a=NULL;
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(a==NULL)
            a=p;
        else
            prev->next=p;
        prev=p;
    }
    printf ("Enter the amount of element you want to insert in 2nd link list :");
    scanf("%d",&n);
    printf ("Enter the element of 2nd link list :");
    b=NULL;
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(b==NULL)
            b=p;
        else
            prev->next=p;
        prev=p;
    }
 concatenate(a , b);
  travietion(a);
 
return 0;
}
