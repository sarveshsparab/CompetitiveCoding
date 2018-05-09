#include<stdio.h>
void swap (int a[], int left, int right){
    int temp;
    temp=a[left];
    a[left]=a[right];
    a[right]=temp;
}
int partition( int arr[],int abc[], int low, int high ){
    int left, right;
    int pivotItem;
    left = low;
    int pivot = left;
    pivotItem = arr[pivot];
    right = high;
    while(left<right){
        while(arr[left]<=pivotItem)
            left++;
        while(arr[right]>pivotItem)
            right--;
        if(left<right){
            swap(arr,left,right);
            swap(abc,left,right);
        }
    }
    arr[low]=arr[right];
    arr[right]=pivotItem;
    swap(abc,low,right);
    return right;
}
void quicksort( int a[],int abc[], int low, int high ){
    int pivot;
    if ( high > low ){
        pivot = partition( a,abc, low, high );
        quicksort( a,abc, low, pivot-1 );
        quicksort( a,abc, pivot+1, high );
    }
}
void queue(int arr[],int abc[],int len){
    int temp[10005]={0},i;
    quicksort(arr,abc,0,len-1);
    for(i=len-1;i>=0;i--){
        if(abc[i]==temp[i])
            continue;
        else{
            int j=i;
            if(temp[j]<abc[j])
            while(temp[j]!=abc[j] && j<len){
                swap(arr,j+1,j);
                swap(abc,j+1,j);
                swap(temp,j+1,j);
                if(arr[j]>arr[j+1])
                    temp[j+1]++;
                j++;
            }
            if(temp[j]>abc[j])
            while(temp[j]!=abc[j] && j<len){
                swap(arr,j-1,j);
                swap(abc,j-1,j);
                swap(temp,j-1,j);
                if(arr[j]>arr[j-1])
                    temp[j-1]--;
                j--;
            }
        }
    }
}
int main(){
    int no,i;
    scanf("%d",&no);
    //if(no>0 && no<=100 && getchar())
    while(no-->0){
        int arr[10005],abc[10005];
        int elements ;
        scanf("%d",&elements);
        int len=elements;
        //if(elements<=10000 && getchar())
        while(--elements>=0){
            scanf("%d",&arr[elements]);
        }
        elements=len;
        //if(getchar())
        while(--elements>=0){
            scanf("%d",&abc[elements]);
        }
        //if(getchar())
        queue(arr,abc,len);
        for(i=0;i<len;i++)
            printf("%d ",arr[i]);
        printf("\n");
    }
    return 0;
}
