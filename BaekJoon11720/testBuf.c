#include <stdio.h>
int main(void) {
    char a='1';
    int count=0;
    while(a != '\n') {
        scanf("%c", &a);
        printf("%d\n", a); // %c로 출력안되는 것을 %d로 출력함으로써 확인 가능하다!!
        count++; 
    }
    printf("%d", count); // strlen(a) + 1
    while(a != '\n') {
        printf("%c", a); //it doesn't work
    }

    return 0;
}