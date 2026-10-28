#include <stdio.h>

int main(){
    int n;
    printf("Nhap so: ");
    do{
        scanf("%d",&n);
        if(n<=0 || n>=100) printf("Nhap lai so: ");
    }while(n<=0 || n>=100);
    printf("Nhap dung roi");
    return 0;
}