#include<stdio.h>
#include<stdlib.h>
#include"function.h"

/*------------------------Ex3------------------------------*/

typedef struct s_list
{
	struct s_list* next;
	int number;
}t_list;


t_list* create_node(int set_number)
{
	t_list* node = (t_list*)malloc(sizeof(t_list));
	if (node)
	{
		node->number = set_number;
		node->next = NULL;
	}
	else
		perror("malloc node failed");
	return node;
};

void push_back(t_list** list, int number)
{
	t_list* new_element = (t_list*)(sizeof(t_list));
	new_element = create_node(number);

	t_list* tmp = *list;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = new_element;
};

void delete_node(t_list** list, int number)
{
	t_list* tmp = *list;
	t_list* tmp2 = *list;
	if (tmp2->next != NULL)
	{
		tmp2 = tmp2->next;
		while (tmp2->number != number)
		{
			tmp = tmp->next;
			tmp2 = tmp->next;
		}
		tmp->next = tmp2->next;
		free(tmp2);
	}
	else
		free(tmp2);
};

t_list* search_node(t_list** list, int number)
{
	t_list* tmp = *list;
	while (tmp->number != number)
	{
		tmp = tmp->next;
	}
	return tmp;
}

/*------------------------Ex1------------------------------*/

int square_root(number_)
{
	int root = 1;
	while (root * root <= number_)
		++root;
	return root - 1;
}

/*------------------------Ex2------------------------------*/

char* LongestCommonPrefix(char** words, int word_count, int word_length)
{
	char* prefix = malloc(word_length * sizeof(char));
	if (!prefix)
		EXIT_FAILURE;
	int k = 0;
	for (int j = 0; j < word_length - 1; ++j)
	{
		int check = 1;
		for (int i = 0; i < word_count - 1; ++i)
		{
			if (words[i][j] != words[0][j] )
			{
				check = 0;
				i = word_count;
			}
			if (words[i][j] == '\0')
			{
				check = 3;
				i = word_count;
				j = word_length;
			}
		}
		if (check == 1)
		{
				prefix[k] = words[0][j];
				prefix[k + 1] = '\0';
				++k;
		}
	}
	if (k == 0)
		prefix[0] = '\0';
	return prefix;
}