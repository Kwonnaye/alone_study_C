#include <stdio.h>

int main(void) {
    int kor,eng,mat; //�� ������ ����
    int credits; //��ü ����
    int res; //��� ����
    double kscore,escore,mscore; //�� ������ ����
    double grade; //���� ���

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