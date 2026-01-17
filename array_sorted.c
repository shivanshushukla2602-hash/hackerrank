#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    int ascending=1;
    int descending=1;
    scanf("%d" , &N);
    int a[N];
    for(int i=0;i<N;++i){
        scanf("%d" , &a[i]);
    }
    for(int i=0;i<=N-2;++i){
        if(a[i]>a[i+1]){
            ascending=0;
        }
        else if(a[i]<a[i+1]){
            descending=0;
        }
    }
    if(ascending==1){
        printf("Ascending");
    }
    else if(descending==1){
        printf("Descending");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}
