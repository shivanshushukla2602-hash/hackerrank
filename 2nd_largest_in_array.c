#include <stdio.h>
#include <limits.h>
#include <math.h>

int findSecondLargest(int arr[], int n) {
    // Complete function logic here
    int max1=arr[0];
    for(int i=1;i<=n-1;++i){
      if(arr[i]>max1){
        max1=arr[i];
    }
    }
    int max2=-1000000001;
    for(int i=0;i<=n-1;++i){
        if(max1>arr[i] && max2<arr[i]){
            max2=arr[i];
        }
    }
    if(max2==-1000000001){
        return -1;
    }
       return max2;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}