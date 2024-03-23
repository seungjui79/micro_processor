#include <stdio.h>
int main(){
    char* data[] = {"가나다", "ABC", "포인터"};
    for (int i=0; i<3; i++){
        printf("%s\n", data[i]);
    }
}