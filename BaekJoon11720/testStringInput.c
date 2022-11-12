//분할컴파일 .. .h에 함수선언, .c에 함수선언 ~.c에 메인문작성
#include <stdio.h>
int main(void) {
    char* st = NULL;
    scanf("%s", st); // 읽기영역 침범이라 될리가 없다.
    printf("%s", st);
}