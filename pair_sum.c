#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d" , &n);
    int a[n];
    for(int i=0;i<n;++i){
        scanf("%d" , &a[i]);
    }
    int target_sum;
    scanf("%d" , &target_sum);
    int i;
    int j;
    for(i=0;i<n;++i){
        for(j=i+1;j<n;++j){
            if(a[i]+a[j]==target_sum){
                 printf("%d %d", a[i],a[j]);
                 return 0;
            }
        }
    }
    printf("-1");
    return 0;
}
