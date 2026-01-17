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
    long long sum=0;
    for(int i=0;i<N;++i){
        sum+=a[i];
    }
    long double avg=sum/(N*1.0);
    int count=0;
    for(int i=0;i<N;++i){
        if(a[i]>avg){
            count++;
        }
    }
    printf("%d" , count);
    return 0;
}
