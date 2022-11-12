#include <stdio.h>
int main(void) {
    char a='\0';
    int count=0;
    while(a != '\n') {
        scanf("%c", &a);
        count++; 
    }
    printf("%d", count); // strlen(a) + 1
    while(a != '\n') {
        printf("%c", a); //it doesn't work
    }

    return 0;
}