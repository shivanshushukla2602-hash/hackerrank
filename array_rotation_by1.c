#include <stdio.h>

void leftRotateByOne(int arr[], int n) {
    // Your code here
    int temp;
    for(int i=0;i<n-1;++i){
        if(i==0){
            temp=arr[i];
            arr[i]=arr[n-1];
            arr[n-1]=temp;
        }
        else{
            temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    leftRotateByOne(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}