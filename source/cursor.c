/*
 * ________________________________________________________________________________
 * |  File: cursor.c
 * |  Project: source
 * |  File Created: Wednesday, 20th November 2024 10:46 am
 * |  Author: Daniel Haddington [haddingtondaniel5@icloud.com]
 */

# include "../includes/eternity.h"

none	move_cursor_up(t_program *c)
{
	if (c->cursorY > 2)
		c->cursorY--;
}
none	move_cursor_down(t_program *c)
{
	if (c->cursorY < 31)
		c->cursorY++;
}
none	move_cursor_left(t_program *c)
{
	if (c->cursorX > 2)
		c->cursorX -= 32;
}
none	move_cursor_right(t_program *c)
{
	if (c->cursorX < 65)
		c->cursorX += 32;
}