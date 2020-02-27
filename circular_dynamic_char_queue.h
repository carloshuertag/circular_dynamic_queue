/******************************************
 * circular_dynamic_char_queue
 * @author: Carlos Huerta García
 * @description: Char queue implementation
 * ***************************************/
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

typedef int QueueEntry;

typedef struct QueueElement{
    QueueEntry entry;
    struct QueueElement* next;
} QueueElement;

typedef struct Queue{
    QueueElement* front, rear;
} Queue;

Queue * createQueue(){

}

bool queueIsEmpty(Queue * queue) {

}

void enQueue(QueueEntry item, Queue * queue) {

}

QueueEntry front(Queue * queue) {

}

QueueEntry rear(Queue * queue) {

}

QueueEntry deQueue(Queue * queue) {

}

void printQueue(Queue * queue) {

}

void clearQueue(Queue * queue) {
    
}