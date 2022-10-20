#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int data;
	struct node *next;
};
int main (void)
{
	struct node *head, *newnode, *temp;
	head = 0;
	int i, choice = 1;
	int count = 0;

	while (choice)
	{
		newnode = malloc(sizeof(struct node));
		printf("Enter data:");
		scanf("%d", &newnode->data);
		newnode->next = 0;

		if (head == 0)
			head = temp = newnode;
		else
		{
			temp->next = newnode;
			temp = newnode;
		}
		printf("Do you wish to stop? (0 Yes/1 No)");
		scanf("%d", &choice);
	}
	free(newnode);

	temp = head;
	while (temp != 0)
	{
		printf("%d", temp->data);
		temp = temp->next;
		count++;
	}
	printf("The number of numbers created is %d\n", count);
	return (0);
}
