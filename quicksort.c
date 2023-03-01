#include<stdio.h>


int median(int arr[],int left,int right){
    int center=(left+right)/2;
    if(arr[left]>arr[center]){
        int temp=arr[left];
        arr[left]=arr[center];
        arr[center]=temp;
    }
    if(arr[left]>arr[right]){
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
    }
    if(arr[center]<arr[right]){
        int temp=arr[right];
        arr[right]=arr[center];
        arr[center]=temp;
    }

    int temp=arr[right-1];
    arr[right-1]=arr[center];
    arr[center]=temp;

    return arr[right-1];

}

void quick_sort(int arr[],int left,int right){
    int temp;
    if(left<=right){
        int pivot=median(arr,left,right);
        int i=left+1;
        int j=right-2;

        for( ; ;){
            while(arr[i]<pivot) i++;
            while(arr[j]>pivot) j--;
            if(i<j){
             temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

            temp=arr[i];
            arr[i]=arr[right-1];
            arr[right-1]=temp;

        }
         quick_sort(arr,left,i-1);
         quick_sort(arr,i+1,right);
    }
}


int main()
{
    int arr[]={6,3,9,5,8,2};
    quick_sort(arr,0,6-1);

    for(int i=0;i<6;i++) printf("%d ",arr[i]);
    

    return 0;
}