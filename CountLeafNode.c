#include<stdio.h>
#include<stdlib.h>

struct node
{
 int data;
 struct node * left;
 struct node * right;
};
struct node * createNode(int val)
{
    struct node * Node =(struct node*)malloc(sizeof(struct node));

    Node -> data = val;
    Node -> left = NULL;
    Node -> right = NULL;
    return(Node);
    
}
int  LN(struct node *t){
    if(t == NULL)
    {return 0;}
    else if ((t->left == NULL) && (t->right == NULL))
     {return 1;
     }
    else{ 
    return (LN(t->left) + LN(t->right));
}}


int main(){                                                         
int result;
struct node * t = createNode(4);                                //             4
t->left= createNode(5);                                         /*            / \       */
t->right= createNode(7);                                          //        5    7 
t->left->left= createNode(9);                                         /*   / \  / \ */
t->left-> right= createNode(3);                                           
t->right->left=createNode(13);
t->right->right=createNode(14);

printf("Number of leaf nodes are:-");
result = LN(t);
printf("%d",result);
}


