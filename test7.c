#include <stdio.h>

int main(){
    int n;
    int i,j;
    scanf("%d",&n);
    int a[n][n];
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int S=0;
    for(i=0; i<n; i++){
        S+=a[i][i]+a[i][n-i-1];
    }
    printf("Tong la: %d",S);
    return 0;
}