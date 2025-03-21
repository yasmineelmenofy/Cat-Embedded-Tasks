#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b){
   int x=*a;
   *a=*b;
   *b=x;
}

int main(){
int n;
printf("Enter the number of the elements :\n");
scanf("%d",&n);
int arr[n];
printf("Enter the numbers:\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int j=n-1;j>0;j--){
for(int i=1;i<=j;i++){
    if(arr[i-1]>arr[i]){
        swap(&arr[i-1],&arr[i]);
    }
}}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}

}
