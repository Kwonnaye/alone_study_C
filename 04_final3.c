#include <stdio.h>

int main(void) {
    int kor,eng,mat; //각 과목의 학점
    int credits; //전체 학점
    int res; //결과 저장
    double kscore,escore,mscore; //각 과목의 점수
    double grade; //평점 평균

    kor = 3, eng = 5, mat = 4;
    credits = kor+eng+mat;

    kscore = 3.8, escore = 4.4, mscore = 3.9;
    grade = (kscore+escore+mscore)/3;

    if((credits>=10)&&(grade>=4.0))
        res = 1;
    else
        res = 0;
    
    printf("%d",res);

    return 0;
}