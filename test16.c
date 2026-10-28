#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Nhap mot so sieu lon n ");
    scanf("%d", &n);
    int *ptr = (int*)malloc(n* sizeof(int));
    if(ptr == NULL) printf("Khong du bo nho");
    else printf("Cap phat thanh cong");
    free(ptr);
    return 0;
}