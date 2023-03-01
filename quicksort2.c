#include<stdio.h>

int partition(int arr[],int p,int r){
    int temp;
    int x=arr[r];
    int i=p-1;
    for(int j=p;j<=(r-1);j++){
        if(arr[j]<=x){
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[i+1];
    arr[i+1]=arr[r];
    arr[r]=temp;

    return i+1;
}

void quick_sort(int arr[],int p,int r){
    if(p<r){
        int q=partition(arr,p,r);
        quick_sort(arr,p,q-1);
        quick_sort(arr,q+1,r);
    }
}


int main()
{

    int arr[]={6,3,9,2,5,8};
    quick_sort(arr,0,5);

    for(int i=0;i<6;i++) printf("%d ",arr[i]);

    printf("\n");

    return 0;
}