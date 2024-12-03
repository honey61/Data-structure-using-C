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
    struct node * Node =malloc(sizeof(struct node));

    Node -> data = val;
    Node -> left = NULL;
    Node -> right = NULL;
    return(Node);
    
}
int  NN(struct node * t){
    int l,r;
    if(t!= NULL){
       l= NN(t->left);
       r= NN(t->right);
       return (1+l+r);
    }
    else{
  
        return 0;
    }
}
int main(){
struct node * t = createNode(4);
t->left= createNode(5);
t->right= createNode(7);
t->left->left= createNode(9);
t->left-> right= createNode(3);
t->left-> left->left= createNode(11);
t->left-> left->right= createNode(12);
t->right->left=createNode(13);
t->right->right=createNode(14);
t->right->right->left=createNode(15);
t->right->right->right=createNode(16);
printf("number of node = ");
int result = NN(t);
printf("%d",result);
return 0;
}


