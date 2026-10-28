#include <stdio.h>

int main(){
    float diem =9.5;
    float *ptr = &diem;
    printf("%f\n",diem);
    printf("%p\n",&diem);
    printf("%f\n",*ptr);
    *ptr = 10.0;
    printf("%f",diem);
    return 0;
}