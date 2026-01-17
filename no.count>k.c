#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    scanf("%d" , &N);
    int a[N];
    for(int i=0;i<N;++i){
        scanf("%d" , &a[i]);
    }
    int K;
    scanf("%d" , &K);
    int count=0;
    for(int i=0;i<N;++i){
        if(a[i]>K){
            count++;
        }
    }
    printf("%d" , count);
    
    return 0;
}
