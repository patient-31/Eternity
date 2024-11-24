/*
 * ________________________________________________________________________________
 * |  File: init.c
 * |  Project: source
 * |  File Created: Wednesday, 20th November 2024 10:46 am
 * |  Author: Daniel Haddington [haddingtondaniel5@icloud.com]
 */

#include "../includes/eternity.h"

none	init_(t_program *c, i_H * title)
{
	c->fileselected = 0;
	c->offset = 0;
	c->title = dc_strdup(title);
	c->cursorX = 1;
	c->cursorY = 2;
	c->currentfile = -1;
	c->isamover = 0;
	c->copyfile = NULL;
	c->copyfilename = NULL;
	getcwd(c->cwd, sizeof(c->cwd));
	list_dir_content(c);

	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	start_color();
	init_pair(REG_FILE_H, COLOR_BLACK, COLOR_MAGENTA); // highlight file
	init_pair(REG_FILE, COLOR_MAGENTA, COLOR_BLACK); // file
	init_pair(DIRECTORY_H, COLOR_BLACK, COLOR_CYAN); // highlight folder
	init_pair(DIRECTORY, COLOR_CYAN, COLOR_BLACK); // folder

}