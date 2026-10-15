#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int *arr;
    int front, rear;
    unsigned size;
};

struct Queue* createQueue(unsigned size) {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->size = size;
    queue->arr = (int*)malloc(queue->size * sizeof(int));
    queue->front = queue->rear = -1;
    return queue;
}

int isFull(struct Queue* queue) {
    return ((queue->rear + 1) % queue->size == queue->front);
}

int isEmpty(struct Queue* queue) {
    return (queue->front == -1); 
}

void enqueue(struct Queue* queue, int item) {
    if (isFull(queue)) {
        printf("Queue is full\n");
        return;
    }
    if (isEmpty(queue)) {
        queue->front = queue->rear = 0;
    } else {
        queue->rear = (queue->rear + 1) % queue->size;
    }
    queue->arr[queue->rear] = item;
    printf("%d enqueued to queue\n", item);
}


int dequeue(struct Queue* queue){
    if(isEmpty(queue)){
        printf("Queue is Empty");
    }

    int result=queue->arr[queue->front];
    if(queue->rear==queue->front){
        queue->rear=queue->front=-1;
    }else{
        queue->front=(queue->front+1)%queue->size;
        printf("%d dequeued from queue\n");
    }
    return result;


}

void display(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return;
    }
    int i = queue->front;
    printf("Elements in the queue are: ");
    do {
        printf("%d ", queue->arr[i]);
        i = (i + 1) % queue->size;
    } while (i != (queue->rear + 1) % queue->size);
    printf("\n");
}

int main() {
    unsigned size = 5;
    struct Queue* queue = createQueue(size);

    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);
    enqueue(queue, 4);

    display(queue);

    enqueue(queue, 5); // Now the queue is full

    display(queue);

    dequeue(queue);

    display(queue);

    enqueue(queue, 6);
    dequeue(queue);
    enqueue(queue, 6);

    display(queue);


    

    free(queue->arr);
    free(queue);
    return 0;
}
