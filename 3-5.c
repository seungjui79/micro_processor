#include <stdio.h>
int main(){
    int arr[3] = {1, 2, 3}; // 12byte
    printf("arr[0]:%d\n", arr[0]);
    printf("arr[1]:%d\n", arr[1]);
    printf("arr[2]:%d\n", arr[2]);
    int *ptr = &arr[0]; // ptr은 배열의 시작 주소만 가지고 있음
    *ptr = 10;
    *(ptr+1) = 20;
    *(ptr+2) = 30;
    printf("변경 후 배열\n");
    printf("arr[0]:%d\n", arr[0]);
    printf("arr[1]:%d\n", arr[1]);
    printf("arr[2]:%d\n", arr[2]);
    return 0;
}