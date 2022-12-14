/*
#문제
push X: 정수 X를 스택에 넣는 연산이다.
pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 스택에 들어있는 정수의 개수를 출력한다.
empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
#입력
첫째 줄에 주어지는 명령의 수 N (1 ≤ N ≤ 10,000)이 주어진다. 
둘째 줄부터 N개의 줄에는 명령이 하나씩 주어진다. 주어지는 정수는 1보다 크거나 같고, 100,000보다 작거나 같다. 
문제에 나와있지 않은 명령이 주어지는 경우는 없다.
#출력
출력해야하는 명령이 주어질 때마다, 한 줄에 하나씩 출력한다.
예제입력1
14
push 1
push 2
top
size
empty
pop
pop
pop
size
empty
pop
push 3
empty
top
#예제출력1
2
2
0
2
1
-1
0
1
-1
0
3
*/
#include <stdio.h>
#define MAX_LENGTH 5
int opCheck(char* intput_string);

class Node {
    private:
        int num;
        Node* link;
    public:
        Node* createNode(int num);
};

class Stack {
    private:
        Node* node;
        Stack* headNode;
    public:
        Stack* getHeadNode();
        void push(int X);
        int pop();
        int size();
        int empty();
        int top();
};

int main(void) {
    int count=0;
    char operation[5];
    scanf("%d", &count);
    for(int i=0; i<count; i++) {
        scanf("%s", operation);
    }
}
