#include<stdio.h>
void main(){
int arr[10]={1,2,3,4,5};
int size=5;
int i=3;
int j;
int new=3;
for(j=size;j>i;j--){
    arr[j]=arr[j-1];
}
arr[j]=new;
size++;
for(j=0;j<size;j++){
    printf("%d",arr[j]);
}
}


