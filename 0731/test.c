#include <stdio.h>

enum GENDER{ male=3, female};
//#define male 3
//#female 4

typedef struct student{
    char name[22];
    char gender;
    int age;
    int id;
    int score;
    char *pa;
}STUDENT, student_t;

typedef struct employee{
    char name[20];
    char depart[20];
    int id;
    int salary;
}work_t;

int main()
{
    //int arr[10]={1, 3, 7};
    work_t arr[10]={{.id=10, .depart="tech", .name="xiaozhao", .salary=7000}, {"xiaoli", "caiwu", 20, 5000}};
    char d = 72;
    int a;
    a = 100;
    //int c = 100;
    //struct student s1;
    //STUDENT s1 = {"xiaozhang", male, 21};
    STUDENT s1 = {.score=100, .name="xiaoli"};
    student_t * ps = &s1;
    int b = male;
    printf("Employee arr[1]:\n");
    printf("Name: %s\n", arr[1].name);
    printf("Department: %s\n", arr[1].depart);
    printf("Id: %d\n", arr[1].id);
    printf("Salary: %d\n", arr[1].salary);

    printf("d= %d, d= %c\n", d, d);
    printf("b=%d\n", b);
    printf("sizeof(s1)=%d\n", sizeof s1);

    printf("Student s1:\n");
    printf("Name: %s\n", s1.name);
    printf("Name: %s\n", ps->name);
    printf("Gender: %s\n", s1.gender == 3?"male":"female");
    printf("Gender: %s\n", ps->gender == 3?"male":"female");
    printf("Age: %d\n", s1.age);
    printf("Age: %d\n", ps->age);
    printf("Id: %d\n", s1.id);
    printf("Id: %d\n", ps->id);
    printf("Score: %d\n", s1.score);
    printf("Score: %d\n", ps->score);
    if(s1.pa == NULL)
        printf("pa is NULL\n");
    return 0;
}

