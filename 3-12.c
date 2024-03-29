#include <stdio.h>

 struct score {
        char name [20];
        int mic, lin, pro;
 };
int main(){
   struct score s[2] = {0};
   for (int i = 0; i < 2; i++){
    scanf("%s", s[i].name);
    scanf("%s", s[i].mic);
    scanf("%s", &s[i].lin);
    scanf("%s", &s[i].pro);
   }
   for (int i = 0; i < 2; i++){
    printf("학생별 성적: %5s %5d %5d %5d\n", s[i].name, s[i].mic, s[i].pro);
    return 0;
   }
}
