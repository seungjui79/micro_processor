#include <stdio.h>
int main(){
    int *ptr;
    int num = 10;
    ptr = &num;
    printf("%d\n", *ptr);
    return 0;
}