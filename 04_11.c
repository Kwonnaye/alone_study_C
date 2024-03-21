#include <stdio.h>

int main(void) {
    int a = 10, b = 20;
    int res;

    res = (++a,++b);

    printf("a : %d, b : %d\n",a,b);
    printf("res : %d\n",res);
    //콤마 연사자의 가장 오른쪽 값이 최종값이 된다.

    return 0;
}