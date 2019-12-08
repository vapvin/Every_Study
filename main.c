#include <stdio.h>
#include <stdlib.h>
#define SIZE 10000
#define INF 999999

int queue[SIZE];
int front = 0;
int rear = 0;

void push(int data) {
    if(rear >= SIZE) {
        printf("큐 오버플로우가 발생했습니다. \n");
        return;
    }

    queue[rear++] = data;
}

void pop() {
    if (front == rear) {
        printf("큐 언더플로우가 발생했습니다. \n");
        return -INF;
    }

    return queue[front++];

}


void show() {
    printf("--- 큐의 앞 ---\n");
    for (int i = front; i < rear; i++) {
        printf("%d\n", queue[i]);
    }
    printf("--- 큐의 뒤 ---\n");
}   

int main(void){
    push(7);
    push(6);
    push(5);
    pop(7);
    push(4);
    pop(6);

    system("pause");

    return 0;
}