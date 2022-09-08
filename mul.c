#include "monty.h"
void mul(stack_t **stack, unsigned int line_number)
{
        int aux;

        if (*stack == NULL || (*stack)->next == NULL)
        {
                fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
                free(var_global.buffer);
                fclose(var_global.file);
                free_dlistint(*stack);
                exit(EXIT_FAILURE);
        }
        else
        {
                aux = (*stack)->n;
                pop(stack, line_number);
                (*stack)->n *= aux;
        }
}

