#include <stdio.h>

int main(void) {
    int res;
    int sh = sizeof(short);
    int lg = sizeof(long);
    res = (sh>lg) ? sh : lg;
    
    if (res == sh) {
        printf("short");
    }
    else
        printf("long");
    
    return 0;
}