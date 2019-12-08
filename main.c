#include <stdio.h>
#include <stdlib.h>
#define INF 999999

typedef struct {
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node *front;
    Node *rear;
    int count;
} Queue;

void push(Queue *queue, int data) {
    Node *node = (Node*)malloc(sizeof(Node));
    node -> data = data;
    node -> next = NULL;
    if (queue -> count == 0){
        queue -> front = node;
    } else {
        queue -> rear -> next = node;
    }

    queue -> rear = node;
    queue -> count++;
}

int main(void){
  
    system("pause");

    return 0;
}