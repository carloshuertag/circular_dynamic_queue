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
    iQueueElement* front, rear;
} iQueue;

iQueue * createiQueue(){

}

bool iqueueIsEmpty(iQueue * queue) {

}

void ienQueue(iQueueEntry item, iQueue * queue) {

}

iQueueEntry iFront(iQueue * queue) {

}

iQueueEntry iRear(iQueue * queue) {

}

iQueueEntry ideQueue(iQueue * queue) {

}

void printiQueue(iQueue * queue) {

}

void cleariQueue(iQueue * queue) {
    
}