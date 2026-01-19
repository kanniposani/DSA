#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node* next;
};
struct node * head;
void insert(int x){
    struct node * temp=(struct node*)malloc(sizeof(struct node));
    (*temp).data=x;
    temp->next=NULL;
    head =temp;
    while (temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main (){
    head =NULL;
    printf("enter a element :");
    int x;
    scanf("%d",&x);
    insert(x);
    int y;
    printf("enter element :");
    scanf("%d",&y);
    insert(y);
    return 0;
}