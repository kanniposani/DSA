#include<stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    float data1;
    struct node * temp;

}node;
int main(){
printf("%p\n",&node.data);
printf("%p\n",&node.data1);
printf("%p",&node.temp);
return 0;
}