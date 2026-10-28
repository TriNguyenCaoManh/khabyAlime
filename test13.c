#include <stdio.h>

void bubble(int b[], int n){
    for(int i=0; i<n-1; i++){
        int xayra = 0;
        for(int j=0; j<n-i-1; j++){
            if(b[j]>b[j+1]){ 
                /* khúc này đang đổi chỗ nên mới phải đổi giá trị*/
                int temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
                xayra =1;
            }
        }
        if(xayra = 0) break;
    }
}

int main(){
    int a[] = {8,3,1,7,0,10,2};
    int n = 7;
    bubble(a, n);
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}