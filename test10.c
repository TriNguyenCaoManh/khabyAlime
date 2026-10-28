#include <stdio.h>

int main(){
    int arr[] = {0, 2, 4, 6, 8, 10};
    /*printf("%d", *(arr +2));*/
    int S = 0;
    for(int i=0; i<6; i++){
        S += *(arr+i);
    }
    printf("%d",S);
    return 0;
}