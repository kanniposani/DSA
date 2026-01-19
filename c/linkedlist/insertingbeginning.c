#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*link;

}node;
node *head=NULL;
void insert(int x){
node* temp=(node*)malloc(sizeof(node));
temp->data=x;
temp->link=NULL;
head=temp;
}
int main(){
    int x;
    printf("enter a number to be inserted in linked list :");
    scanf("%d",&x);
    insert(x);
    printf("%d\n",head->data);
  
}
