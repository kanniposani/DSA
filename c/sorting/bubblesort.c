#include<stdio.h>
int main(){
int a[5]={5,4,3,2,1};
int n=5;
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}
printf("\n");
// bubble sorting // sorting adajcent ones side by side
for(int i=0;i<n-1;i++){ // no. of passes 
   for(int j=0;j<=n-2;j++){
    if(a[j]>a[j+1]){
    int temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
}
}
for(int i=0;i<n;i++){
printf("%d ",a[i]);
}
    return 0;
}