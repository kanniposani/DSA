#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node * next;

}node;
node* head =NULL;
void insert(int x,int n){
    node*temp1=(node*)malloc(sizeof(node));
    temp1->data=x;
    temp1->next=NULL;
    if(n==1){
        temp1->next=head;
        head=temp1;
        return ;
    }
    node*temp=head;
    for(int i=0;i<n-2;i++){
        temp=temp->next;
    }
    // temp2 last but one deggara undi 
    temp1->next=temp->next;
    temp->next=temp1;

}
void delete(int n){
    node*temp=head;
    if (n==1){
        head=temp->next;
        free(temp);
        return;
    }
    for(int i=0;i<n-2;i++){
        temp=temp->next;
    }
    node*del=temp->next;
    temp->next=del;
    free(del);
}
void print(){
    node*temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
    
}
int main (){
    insert(5,1);
    insert(10,1);
    insert(2,3);
    print();
    delete(1);
    print();
    insert(21,3);
    print();
    return 10;
};
