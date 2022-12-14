#pragma once
#include<stdio.h>
#include<stdlib.h>
#include"function.h"

int main()
{
	/*------------------------Ex3------------------------------*/
	//t_list* list = create_node(1);
	//push_back(&list, 2);
	//push_back(&list, 3);
	//push_back(&list, 4);
	//push_back(&list, 5);
	//delete_node(&list, 4);
	//search_node(&list, 3);

	/*------------------------Ex1------------------------------*/
	//printf("%i", square_root(109));

	/*------------------------Ex2------------------------------*/
	/*
	char** words = malloc(3 * sizeof(char*));
	if (!words)
	{
		perror("malloc_text failed.");
		return 1;
	}
	for (int i = 0; i < 10; ++i)
	{
		words[i] = malloc(20 * sizeof(char));
		if (!words[i])
		{
			perror("malloc_text[i] failed.");
			return 1;
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		fgets(words[i], 19, stdin);
	}
	printf("\n\n%s", LongestCommonPrefix(words, 3, 20));
	*/
	return 0;
}