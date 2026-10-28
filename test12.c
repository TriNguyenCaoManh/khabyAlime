#include <stdio.h>

void select(int b[], int n){
    for(int i=0; i<n; i++){
        int min = i;
        for(int j=i; j<n; j++){
            if (b[min]>b[j]) min = j; /*khúc này chỉ là đang đi tìm số bé nhất thôi,
             min = j là đang kiếm được vị trí có giá trị thấp nhất là vị trí j*/
        }
        int temp = b[i];
        b[i]= b[min];
        b[min] = temp;
    }
}

int main(){
    int a[] = {8,3,1,7,0,10,2};
    int n = 7;
    select(a, n);
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}