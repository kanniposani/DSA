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
// insertion sorting // inserting into array to correct place
for(int i=0;i<n;i++){ // no. of passes 
 int j=i;
   while(a[j]<=a[j-1]&&j>=0){
    int temp=a[j-1];
    a[j-1]=a[j];
    a[j]=temp;
    j--;
   }
}
for(int i=0;i<n;i++){
printf("%d ",a[i]);
}
    return 0;
}