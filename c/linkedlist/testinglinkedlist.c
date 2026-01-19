#include<stdio.h>
#include<stdlib.h>
int main (){
 typedef struct node {
        int data;
        struct node* next;

    }node;
node* head=NULL;
node* temp=(node*)malloc(sizeof(node));
temp->data=2;
temp->next=NULL;
head=temp;
printf("%d ",head->data);
    return 9;
}