#include <stdio.h>

long long int muhai(int n){
    if(n<=0) return 1;
    return 2*muhai(n-1);
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%ld",muhai(n));
    return 0;
}