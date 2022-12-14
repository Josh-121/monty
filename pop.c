#include "monty.h"
void pop(stack_t **stack, unsigned int line_number)
{
        stack_t *node = *stack;

        if (stack == NULL || *stack == NULL)
        {
                fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
                exit(EXIT_FAILURE);
        }
        *stack = node->next;
        if (*stack != NULL)
                (*stack)->prev = NULL;
        free(node);
}

