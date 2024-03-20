#include <stdio.h>
int main(){
    int *ptr1;
    int **ptr2; //
    int num = 10;
    ptr1 = &num;
    ptr2 = &ptr1;
    printf("%d\n", **ptr2);
    return 0;
}

// 선언: 공간확보
// 호출: 가리키는 값