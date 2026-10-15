#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct Queue{
    int * arr;
    int rear,front;
    unsigned size;
};

struct Queue* createqueue(unsigned size){
        struct Queue* queue=(struct Queue*)malloc(sizeof(struct Queue));

    queue->size=size;
    queue->front=queue->rear=-1;
    return queue;
    

}


int isFull(struct Queue* queue){
    return ((queue->rear+1)% queue->size==queue->front);
}

int isEmpty(struct Queue* queue){
    return (queue->front==-1);
}

int enqueue(struct Queue* queue,int data){
    if(isFull(queue)){
        printf("Queue is Full");
    }

    if(isEmpty(queue)){
        queue->front=queue->rear=0;
    }else{
        queue->rear=(queue->rear+1)%queue->size;

    }
    queue->arr[queue->rear]=data;
    printf("%d enququed to queue\n",data);
}

int dequeue(struct Queue* queue){
    if(isEmpty(queue)){
        printf("Queue is Empty");
    }

    int rseult=queue->arr[queue->front];
    if(queue->front==queue->rear){
        queue->front=queue->rear=-1;
    }else{
        queue->front=(queue->front+1)%queue->size;
        printf("%d deququed from queue\n");
    }
    return rseult;
}

int display(struct Queue* queue){
    if(isEmpty(queue)){
        printf("Queue is Empty");

    }

    int i=queue->front;
printf("Queue elements are:");
    do{
        printf("%d",queue->arr[i]);
        i=(i+1)%queue->size;

    }while(i!=(queue->rear+1)%queue->size);
    printf("\n");
}

int main(){
    unsigned size=5;
    struct Queue* queue=createqueue(size);

    enqueue(queue,1);
    enqueue(queue,2);
    enqueue(queue,3);

    display(queue);
}