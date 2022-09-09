#include "monty.h"
global_var var_global;
/**
 * main - driver function for monty program
 * @ac: int num of arguments
 * @av: opcode file
 * Return: 0
 */
int main(int ac, char **av)
{
        stack_t *stack;

        stack = NULL;
        if (ac != 2)
        {
                fprintf(stderr, "USAGE: monty file\n");
                exit(EXIT_FAILURE);
        }

        read_file(av[1], &stack);
        free_dlistint(stack);
        return (0);
}

void free_dlistint(stack_t *head)
{
        stack_t *tmp;

        while (head != NULL)
        {
                tmp = head->next;
                free(head);
                head = tmp;
        }
}
int isAlpha(int c)
{
        if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
                return (1);
        else
                return (0);
}
  
