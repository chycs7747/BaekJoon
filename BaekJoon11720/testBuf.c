#include <stdio.h>
int main(void) {
    char a='\0';
    int count=0;
    while(a != '\n') {
        scanf("%c", &a); // 버퍼에 문자가 없으면 하나 입력받고 a에 저장, 이미 있으면 버퍼에서 맨 앞꺼 하나 빼서 a에 저장.
        printf("%d\n", a); // %c로 출력안되는 것을 %d로 출력함으로써 확인 가능하다!!
        count++; // \n까지 들어오고 조건문을 가므로 최종 count는 문자개수+1이 된다.
    }

    return 0;
}