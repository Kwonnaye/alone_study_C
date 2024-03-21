#include <stdio.h>

int main(void) {
    int seats = 70;
    int audience = 65;
    double rate = ((double)audience/(double)seats)*100;
    printf("입장률 : %.1lf%%",rate);
    // %를 적고싶으면 두 번(%%) 입력하면 된다.
    
    return 0;
}