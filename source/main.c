/*
 * ________________________________________________________________________________
 * |  File: main.c
 * |  Project: source
 * |  File Created: Wednesday, 20th November 2024 10:46 am
 * |  Author: Daniel Haddington [haddingtondaniel5@icloud.com]
 */

#include "../includes/eternity.h"

int main(none)
{
	t_program *c;

	c = malloc(sizeof(t_program));
	*c = (t_program){0};

	init_(c, "eternity v0.1");
	run_(c);
}