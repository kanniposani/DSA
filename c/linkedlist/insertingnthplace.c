#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
   struct node*next;

}node;
node* head =NULL; // initially head is pointing nothing
void insert(int x,int n){
    node*temp1=(node*)malloc(sizeof(node));// temp1 of struct is created 
    (*temp1).data=x;
    temp1->next=NULL;
    if(n==1){
        temp1->next=head;
        head=temp1;
        return ;
    }
    node*temp2=head; // temp2  also starting at head
    for(int i=0;i<n-2;i++){
        temp2=temp2->next;
    }
    // temp2 is there at n-1 node = pointing nth node
    temp1->next=temp2->next; // temp1 pointing last
    temp2->next=temp1;  // from n-1 t0 temp1 to last 

}
void print(){
    node* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main (){
  printf("enter a number :");
  int x;
  scanf("%d",&x);
  insert(x,1);
  int y;
  printf("enter a number :");
  scanf("%d",&y);
  insert(y,2);
  int z;
  printf("enter a number :");
  scanf("%d",&z);
  insert(z,3);
  int x1;
  printf("enter a number :");
  scanf("%d",&x1);
  insert(x1,2);
  print();
    return 100;
}