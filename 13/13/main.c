#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct student {
    //학번
    int ID;
    //이름
    char name[20];
    //학점
    double grade;
};

int main(int argc, char * argv[]) {
    
    //변수선언 및 초기화
    struct student stud = {10, "sowon", 4.3};
    struct student *stdPtr;
    
    stdPtr = &stud;
    
    //학번 이름 학점 값 변경
    stdPtr->ID = 17;
    strcpy(stdPtr->name, "lee");
    stdPtr->grade = 2.0;
    
    //각각 출력
    printf("ID : %i, name : %s, grade : %lf\n",
           stdPtr->ID, stdPtr->name, stdPtr->grade);
           
    system("PAUSE");
    return 0;
}
