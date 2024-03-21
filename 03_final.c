#include <stdio.h>

int main() {
    int kor,eng,mat;
    kor = 70;
    eng = 80;
    mat = 90;

    int sum = kor+eng+mat;
    printf("국어 : %d, 영어 : %d, 수학 : %d\n",kor,eng,mat);
    printf("총점 : %d",sum);

    return 0;
}