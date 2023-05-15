#ifndef QUEUES_H
#define QUEUES_H
/**
 * list data structure containing the queues in the system
 */

#include "list.h"

struct queue_list {
    node * queue;
    struct queue_list *next;
};
// insert and delete operations.
void insert_queues(struct node **queue_list, Task *task);
void delete_queues(struct node **queue_list, Task *task);
void traverse_queues(struct node *queue_list);

#endif