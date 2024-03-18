#include <stdio.h>
int main(){
    int *ptr;
    int num = 10;
    ptr = &num;
    printf("%d\n", *ptr); // ptr은 주소를 저장하는 공간, *ptr은 주소가 가리키는 곳의 값을 의미한다
    printf("%p\n", &num); // %p는 주소를 의미한다.
    return 0;
}