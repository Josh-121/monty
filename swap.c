#include "monty.h"
void swap(stack_t **stack, unsigned int line_number)
{
        stack_t *node;
        int tmp;

        node = *stack;
        if (node == NULL || node->next == NULL)
        {
                fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
                exit(EXIT_FAILURE);
        }
        tmp = node->n;
        node->n = node->next->n;
        node->next->n = tmp;
}


