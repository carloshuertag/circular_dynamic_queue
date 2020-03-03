/******************************************
 * circular_dynamic_int_queue
 * @author: Carlos Huerta García
 * @description: Int queue implementation
 * ***************************************/
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

typedef int iQueueEntry;

typedef struct iQueueElement{
    iQueueEntry entry;
    struct iQueueElement* next;
} iQueueElement;

typedef struct iQueue{
    iQueueElement * front, * rear;
} iQueue;

iQueue * createiQueue(){
    iQueue* queue = (iQueue*)malloc(sizeof(iQueue));
    if(queue == NULL)
        exit(1);
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

bool iqueueIsEmpty(iQueue * queue) {
    return !queue->front || !queue;
}

iQueueElement * createiQueueElement(iQueueEntry item) {
    iQueueElement* element = (iQueueElement*)malloc(sizeof(iQueueElement));
    if (element == NULL) 
        exit(1);
    element->entry = item;
    element->next = NULL;
    return element;
}

void ienQueue(iQueueEntry item, iQueue * queue) {
    iQueueElement* element = createiQueueElement(item);
    if(queue->front == NULL)
        queue->front = element;
    else
        queue->rear->next = element;
    queue->rear = element;
    queue->rear->next = queue->front;
}

iQueueEntry iFront(iQueue * queue) {
    if(iqueueIsEmpty)
        return INT_MIN;
    return queue->front->entry;
}

iQueueEntry iRear(iQueue * queue) {
    if(iqueueIsEmpty)
        return INT_MIN;
    return queue->rear->entry;
}

iQueueEntry ideQueue(iQueue * queue) {
    if(iqueueIsEmpty)
        return INT_MIN;
    iQueueEntry dequeued;
    if(queue->front == queue->rear){
        dequeued = queue->front->entry;
        free(queue->front);
        queue->front = NULL;
        queue->rear = NULL;
    } else {
        iQueueElement* temp = queue->front;
        dequeued = temp->entry;
        queue->front = queue->front->next;
        queue->rear->next = queue->front;
        free(temp);
    }
    return dequeued;
}

void printiQueue(iQueue * queue) {
    if(iqueueIsEmpty){
        puts("[ ]");
        return;
    }
    iQueueElement* element = queue->front;
    while (element->next != queue->front) {
        printf("[%d]->", element->entry);
        element = element->next;
    }
    printf("[%d]->", element->entry);
}

void cleariQueue(iQueue * queue) {
    if(!iqueueIsEmpty){
        iQueueElement* element;
        while ((element = queue->front) != queue->front) {
            queue->front = queue->front->next;
            free(element);
        }
        queue->front = NULL;
        queue->rear = NULL;
    }
}