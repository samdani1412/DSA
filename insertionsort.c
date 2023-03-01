#include<stdio.h>

int main()
{

    int arr[]={44,99,11,22,33};
    int temp;

    for(int i=1;i<5;i++){
        temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

    for(int i=0;i<5;i++) printf("%d ",arr[i]);

    return 0;
}