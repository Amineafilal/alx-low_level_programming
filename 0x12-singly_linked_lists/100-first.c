#include <stdio.h>

void __attribute__ ((constructor)) printfbeforemain(void);
/**
 * printfbeforemain - Write a function that prints before the main.
 * main is function is excuted.
*/
void printfbeforemain(void)
{
	printf ("You're beat! and yet, you must allow,\n");
	printf ("I bore my house upon my back!\n");
}
