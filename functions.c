#include "monty.h"
/**
 * _push - A function that adds to the top of linked list
 * @stack - Stack of the linked list
 * Return: A stack contain the upgraded list
 */
stack_t *_push(stack_t **top, const int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "L<line_number>: usage: push integer");
		exit(1);
	}
	new->n = n;
	new->next = *top;
	new->prev = NULL;
	if ((*top) != NULL)
		(*top)->prev = new;
	*top = new;
	return (*top);
}
/**
 * _pall - A function that prints all the values on the stack starting from top
 * @top: the stack
 */
void _pall(const stack_t *top)
{
	while (top != NULL)
	{
		printf("%d\n", top->n);
		top = top->next;
	}
