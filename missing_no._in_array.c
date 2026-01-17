#include <stdio.h>

int main(){
    int N;
    scanf("%d" , &N);
    int a[N-1];
    for(int i=0;i<=N-1;++i){
        scanf("%d" ,&a[i]);
    }
    int actualSum=(N*(N+1))/2;
    int newSum=0;
    for(int i=0;i<=N-2;++i){
        newSum+=a[i];
    }
    int res=actualSum-newSum;
    printf("%d" ,res);
    return 0;
}
