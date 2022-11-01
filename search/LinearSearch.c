#include<stdio.h>
#include<stdlib.h>
void linearSearch(int* a,int s,int n){
    int i;
    for(i=0;i<n;i++){
        if(s==a[i]){
            printf("Element %d is present in %d index or %d position",s,i,i+1);
            break;
        }
    }
    if(!(i<n))
    printf("Element is absent.\n");
    
}
int main(){
    //Your code goes here
    int n,i,s;
    int* a;
    printf("Enter the number of element you want -  ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter the elements  -  \n");
    for( i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element you want to find -  ");
    scanf("%d",&s);
    linearSearch(a,s,n);
    return 0;
}