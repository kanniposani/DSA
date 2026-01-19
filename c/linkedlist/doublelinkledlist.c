#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int data;
    struct node * prev;
    struct node *next;

}node;
node * head =NULL;
void create(int data){
    node *temp=(node*)malloc(sizeof(node));
    (*temp).data=data;
    (*temp).prev=NULL;
    (*temp).next=NULL;
    if (head==NULL){
        head=temp;
    }
    else{
        node*one=(node*)malloc(sizeof(node));
        one=head;
        while(one->next!=NULL){
            one=one->next;
        }
        one->next=temp;
        temp->prev=one;
        (*temp).next=NULL;

    }
}
void print(){
    node*one=head;
    while((*one).next!=NULL){
        printf("%d ",(*one).data);
    }
    printf("\n");
}
int main (){
    create(5);
    create(4);
    print();
    return 0;
}