#include <stdio.h>
#include <string.h>

int main() {

    char fruit[20] = "strawberry";

    printf("%s\n",fruit);
    strcpy(fruit,"banana"); //strcpy : fruit에 banana 복사
    printf("%s\n",fruit);
    
    return 0;
}