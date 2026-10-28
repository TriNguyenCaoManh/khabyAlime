#include <stdio.h>

int main(){
    int n;
    int i;
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Mang truoc khi sap xep: ");
    for (i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for (i=0; i<n-1; i++){
        for (int j=0; j<n-1; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Mang sau khi sap xep: ");
    for (i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}