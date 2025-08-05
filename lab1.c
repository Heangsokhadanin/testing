#include<stdio.h>

int main(){
    int arr[5];
    for(int i = 0; i < 5 ; i++)
    {
        printf("enter vslue to &a[%d]",i);
        printf("print address &a[%d]: %x\n",i, &arr[i]);
        
    }
}