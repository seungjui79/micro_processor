#include <stdio.h>
typedef struct person{
    char name[20];
    int num;
    unsigned int age;
}Person;

void ShowData(Person *ptr){
    printf("이름: %s\n", ptr -> name);
    printf("번호: %d\n", ptr -> num);
    printf("나이: %u\n", ptr -> age);
}
int main(void) {
    Person ps = {"이순신", 10, 24};
    Person *ptr = &ps;
    ShowData(ptr);
    return 0;
}