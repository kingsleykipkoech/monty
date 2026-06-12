#include "monty.h"

/**
 * f_rotl - rotates the stack to the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_rotl(stack_t **head, unsigned int counter)
{
	stack_t *tmp, *last;
	(void)counter;

	if (*head == NULL || (*head)->next == NULL)
		return;
	tmp = *head;
	last = *head;
	while (last->next)
		last = last->next;
	*head = tmp->next;
	(*head)->prev = NULL;
	last->next = tmp;
	tmp->prev = last;
	tmp->next = NULL;
}

/**
 * f_rotr - rotates the stack to the bottom
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_rotr(stack_t **head, unsigned int counter)
{
	stack_t *last;
	(void)counter;

	if (*head == NULL || (*head)->next == NULL)
		return;
	last = *head;
	while (last->next)
		last = last->next;
	last->prev->next = NULL;
	last->next = *head;
	last->prev = NULL;
	(*head)->prev = last;
	*head = last;
}

/**
 * f_stack - sets the format to stack (LIFO)
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}

/**
 * f_queue - sets the format to queue (FIFO)
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}
