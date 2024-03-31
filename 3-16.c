#include <stdio.h>

typedef struct student {
    int num;
    char name[20];
    int mic, lin, pro;
    int tot;
    double avg;
    char grade;
} Student;

void input_data(Student *stu) {
    printf("num: ");
    scanf("%d", &stu->num);
    printf("name: ");
    scanf("%s", stu->name);
    printf("mic: ");
    scanf("%d", &stu->mic);
    printf("lin: ");
    scanf("%d", &stu->lin);
    printf("pro: ");
    scanf("%d", &stu->pro);
}

void calc_data(Student *stu) {
    stu->tot = stu->mic + stu->lin + stu->pro;
    stu->avg = (double)stu->tot / 3.0;

    stu->avg = ((int)(stu->avg + 0.5)); // 소수점 첫째 자리까지 반올림하여 일의 자리까지 나타냄!

    if (stu->avg >= 90)
        stu->grade = 'A';
    else if (stu->avg >= 80)
        stu->grade = 'B';
    else if (stu->avg >= 70)
        stu->grade = 'C';
    else
        stu->grade = 'F';
}

void print_data(Student *stu) {
    printf("%d, %s, %d, %d, %d, %d, %.0f, %c\n", stu->num, stu->name, stu->mic, stu->lin, stu->pro, stu->tot, stu->avg, stu->grade);
}

int main(void) {
    Student stu;
    input_data(&stu);
    stu.tot = 0; //초기화
    stu.avg = 0.0; //초기화
    calc_data(&stu);
    print_data(&stu);
    return 0;
}