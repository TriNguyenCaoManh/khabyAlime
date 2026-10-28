#include <stdio.h>
#include <stdlib.h>

int *taovanhapmang (int n){
    int *mang = (int*)malloc(n * sizeof(int));
    if (mang == NULL){
        printf("Khong du bo nho");
        return NULL;
    }
    for(int i = 0; i < n; i++){
        scanf("%d",(mang+i));
    }
    return mang;
}

void inmang (int *a, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", *(a+i));
    }
}

int timsolonnhat(int *a, int n){
    int max = *a;
    for(int i = 1; i < n; i++){
        if (max < *(a+i)) max = *(a+i);
    }
    return max;
}

int main(){
    int n;
    scanf("%d", &n);
    int *MANG = taovanhapmang(n);
    inmang(MANG, n);
    int b = timsolonnhat(MANG, n);
    printf("So lon nhat la: %d", b);
    free(MANG);
    return 0;
}