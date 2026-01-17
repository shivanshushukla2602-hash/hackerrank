#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d" , &n);
    int a[n];
    for(int i=0;i<n;++i){
            scanf("%d" , &a[i]);
    }
    int i;
    for(i=0;i<=n-2;++i){
        if(a[i]>a[i+1]){
            break;
        }
    }
    if(i==n-1){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}
