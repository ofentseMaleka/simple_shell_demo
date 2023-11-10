#include <stdio.h>
#include "header_file.h"

/**
 * main - prin
 * Description: This is the main function that prints a greeting.
 * Return: Always 0 (Success)
 */

int main(void)
{
int age;
int isAdult, isSenior, isTheWorkforce;
printf("What is the age of those I want at the Labour Force? \n");
scanf("%d", &age);
isAdult = age >= 18;
isSenior = age >= 65;
isTheWorkforce = isAdult && !isSenior;
if (isTheWorkforce)
{
printf("You are in the labour force\n");
}
else
{
printf("You are not in the labour force\n");
}
return (0);
}
