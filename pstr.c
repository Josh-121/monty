#include "monty.h"
void pstr(stack_t **stack, unsigned int line_number)
{
        stack_t *tmp = *stack;
        int c = 0;

        (void)line_number;


        while (tmp)
        {
                c = tmp->n;
                if (c == 0 || isAlpha(c) == 0)
                        break;
                putchar(c);
                tmp = tmp->next;
        }
        putchar('\n');
}

