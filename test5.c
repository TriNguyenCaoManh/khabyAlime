#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    int min=a[0];
    int max=a[0];
    int b,c;
    for(int i=0; i<n; i++){
        if(max<=a[i]){
            max = a[i];
            b=i;
        }
        if(min>=a[i]){
            min = a[i];
            c=i;
        }
    }
    printf("Max min lan luot la: %d, vi tri %d va %d, vi tri %d", max, b, min, c);

    return 0;
}