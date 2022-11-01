#include<stdio.h>
#include<stdlib.h>
void BinarySearch(int* a,int s,int n){
    int lb=0,ub=n-1,mid;
    while(lb<=ub){
        mid=(ub+lb)/2;
        if(a[mid]==s){
            printf("Element %d is present in %d index or %d position",s,mid,mid+1);
            break;
        }
        else if(a[mid]<s){
            ub=mid-1;
        }
        else if(a[mid]>s){
            lb=mid+1;
        }
    }
    if(lb>ub)
    printf("Element is absent.\n");
}
int main(){
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
    BinarySearch(a,s,n);
    return 0;
}