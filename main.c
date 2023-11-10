#include "header_file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 100

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	
	for (;;) {
        char *my_prompt = "Lets Code!$$ ";
        size_t memory_size = BUFFER_SIZE;
        char *memory = malloc(BUFFER_SIZE);

        if (memory == NULL)
	{
		perror("Memory allocation failed");
		return 1;
	}

        write(1, my_prompt, strlen(my_prompt));

        if (fgets(memory, memory_size, stdin) == NULL)
	{
		perror("Error reading input");
		free(memory);
		return 1;
        }
	size_t input_length = strlen(memory);
        if (input_length > 0 && memory[input_length - 1] == '\n')
       	{
		memory[input_length - 1] = '\0';
        }
	write(1, memory, strlen(memory));
        write(1, "\n", 1);

        free(memory);
        memory = NULL;
	}
	return 0;
}
