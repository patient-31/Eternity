/*
 * ________________________________________________________________________________
 * |  File: eternity_types.h
 * |  Project: includes
 * |  File Created: Wednesday, 20th November 2024 10:46 am
 * |  Author: Daniel Haddington [haddingtondaniel5@icloud.com]
 */

#ifndef ETERNITY_TYPES_H
#define ETERNITY_TYPES_H

typedef unsigned long long u64;
typedef unsigned char			u_H;
typedef unsigned short			u_P;
typedef unsigned int			uP_1;
typedef unsigned long			uP_2;

typedef char					i_H;
typedef short					i_P;
typedef int						iP_1;
typedef long					iP_2;

typedef float					fP_1;
typedef double					dP_2;

typedef	void					t_cleanup_function;
typedef	void					error;
typedef void					none;
typedef bool					witch;

typedef struct s_file_entries
{
	i_H				*name;
	u_H				type;
} t_file_entries;

typedef struct s_eternity
{	
	i_P			offset;
	i_P			in;
	i_H			*title;
	i_P			cursorX;
	i_P			cursorY;

	i_H				cwd[1024];
	struct dirent	*entry;
	DIR				*directory;
	iP_1			filecount;
	t_file_entries	*file_entries;


	iP_1			currentfile;
	i_P				fileselected;
	i_P				isamover;
	i_H 			*usefile;
	i_H				*copyfile;
	i_H				*copyfilename;


} t_program;


typedef	void		(*p_cleanup_function)(t_program *);

#endif