/*
 * ________________________________________________________________________________
 * |  File: clean.c
 * |  Project: source
 * |  File Created: Wednesday, 20th November 2024 10:46 am
 * |  Author: Daniel Haddington [haddingtondaniel5@icloud.com]
 */

# include "../includes/eternity.h"

t_cleanup_function	cleanup(t_program *c)
{
	if (c->title)
		free(c->title);
	free_file_entries(c->file_entries, c->filecount);
	if (c->copyfile)
		free(c->copyfile);
	if (c->copyfilename)
		free(c->copyfilename);

	endwin();
	if (c)
		free(c);
}

none	free_file_entries(t_file_entries *f, iP_1 fc)
{
	iP_1 i;

	i = 0;
	while (i < fc)
	{
		if (f[i].name)
			free(f[i].name);
		i++;
	}
	free(f);
}
