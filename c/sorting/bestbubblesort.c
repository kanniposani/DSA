 #include<stdio.h>
 #include<stdbool.h>
int main(){
int n;
printf("ENTER SIZE OF ARRAY : ");
scanf("%d",&n);
int a[n];
printf("ENTER ELEMENTS OF ARRAY : ");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}
printf("\n");
// bubble sorting // sorting adajcent ones side by side
for(int i=0;i<n-1;i++){ // no. of passes 
 bool flag =true;
   for(int j=0;j<=n-2;j++){
    if(a[j]>a[j+1]){
    int temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
    flag=false;
   }
   if (flag==true){
    break;
   }
}
}
for(int i=0;i<n;i++){
printf("%d ",a[i]);
}
    return 0;
}