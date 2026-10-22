#include "structures/stack.h"
#include <stdlib.h>
#include <stdio.h>

t_stack create_empty_stack() {
    t_stack stack;
    stack.list = create_empty_list(); 
    return stack; 
}

// Returns true if the stack is empty
bool is_empty_stack(t_stack *stack) {
    return stack->list.head == NULL;
}


// Pushes the value val to the top of the stack
void push(t_stack *stack, T val) {
    push_back(&stack->list, val); 
}

// Returns the value at the top of the stack
T get_top(t_stack *stack) {
    return get(&stack->list, stack->list.size-1); 
}

// Returns the value at the top of the stack and deletes it from the stack
T pop(t_stack *stack) {
    T val = get(&stack->list, stack->list.size-1);
    delete_at(&stack->list, stack->list.size-1);
    return val; 
}

// Destroys the stack
void destroy_stack(t_stack *stack) {
    destroy_list(&stack->list); 
}

// Prints the content of the stack
void print_stack(t_stack *stack) {
    print_list(&stack->list); 
}