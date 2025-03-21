#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b){
 int x=*a;
 *a=*b;
 *b=x;
}

int main(){
 int n;
 printf("Enter the number of the elements:\n");
 scanf("%d",&n);
 int arr[n];
 printf("Enter the numbers:\n");
 for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
 }
 int min;
 for(int j=0;j<n;j++){
 min=j;
 for(int i=j+1;i<n;i++){
    if(arr[i]<arr[min]){
        min=i;
    }
 }
 if(min != j){
        swap(&arr[j],&arr[min]);
    }
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
 }
}
