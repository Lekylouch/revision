#include "structures/queue.h"
#include <stdlib.h>
#include <stdio.h>

t_queue create_empty_queue() {
    t_queue queue;
    queue.list = create_empty_list(); 
    return queue; 
}

// Returns true if the queue is empty
bool is_empty_queue(t_queue *queue) {
    return queue->list.head==NULL; 
}

// Pushes the value val to the back of the queue
void push_queue(t_queue *queue, T val) {
    push_back(&queue->list,val); 
}

// Returns the value at the front of the queue
T get_front_queue(t_queue *queue) {
    return get(&queue->list, 0); 
}

// Returns the value at the front of the queue and deletes it from the queue
T pop_queue(t_queue *queue) {
    T val = get(&queue->list, 0); 
    delete_at(&queue->list, 0);
    return val; 
}

// Destroys the queue
void destroy_queue(t_queue *queue) {
    destroy_list(&queue->list); 
}

// Prints the content of the queue
void print_queue(t_queue *queue) {
    print_list(&queue->list); 
}