#include <stdio.h>

int main(){
    int arr[2][3] ={{1,2,3},{4,5,6}};

    int (*p1)[2][3] = &arr; //배열 전체의 주소
    int (*p2) [3]  = &arr[0]; //한줄의 주소
    int  *p3= &arr[0][0]; //하나의주소

    printf("%p\n", (void*)p1);
    printf("%p\n", (void*)p2);
    printf("%p\n", (void*)p3);
    printf("\n");
    printf("%lu\n", (unsigned long long)(p1+1)-(unsigned long long)(p1));
    printf("%lu\n", (unsigned long long)(p2+1)-(unsigned long long)(p2));
    printf("%lu\n", (unsigned long long)(p3+1)-(unsigned long long)(p3));
}   
