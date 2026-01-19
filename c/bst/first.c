#include<stdio.h>
#include<stdio.h>
typedef struct node{
  struct node*left;
  int data;
  struct node*right;
  
}node;
node*head=NULL;
void create(int data){
  node*new=(node*)malloc(sizeof(node));
  new->data=data;
  new->left=NULL;
  new->right=NULL;
  if (head==NULL){
    head = new;
  }

}
void printinorder(){ // it prints first all left and then rleft of right snd then right
    node * temp=head; 
    temp->left;
    printf("%d ",temp->data);
    temp->right; // its wrong code to print left and rigt data 
                // actually we have to send address

}
int main (){





    return 0;
}