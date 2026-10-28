#include <stdio.h>

int* findMax(int *arr, int size) {
    if (size<=0) return NULL;
    int *pMax = &arr[0];
    for (int i=0; i<size; i++){
        if (*pMax < arr[i]) pMax = &arr[i];
    }
    return pMax;
}

int main(){
    int a[]={0, 3, 56, 4, 7, 5};
    int size = 6;
    int *p = findMax(a,size);
    printf("%p",p);
    return 0;
}