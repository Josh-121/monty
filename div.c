#include "monty.h"
void divide(stack_t **stack, unsigned int line_number)
{
        int div = 0;

        if (*stack == NULL || (*stack)->next == NULL)
        {
                fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
                free(var_global.buffer);
                fclose(var_global.file);
                free_dlistint(*stack);
                exit(EXIT_FAILURE);
        }
        else if ((*stack)->n == 0)
        {
                fprintf(stderr, "L%d: division by zero\n", line_number);
                free(var_global.buffer);
                fclose(var_global.file);
                free_dlistint(*stack);
                exit(EXIT_FAILURE);
        }
        else
        {
                div = (*stack)->n;
                pop(stack, line_number);
                (*stack)->n /= div;
        }
}

