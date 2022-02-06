#include <unistd.h>
#include <stdlib.h>

void	prnt(int row, int col, char **table)
{
	int r;
	int c;

	r = 0;
	while (r < row)
	{
		c = 0;
		while (c < col)
		{
			write(1, &table[r][c], 1);
			c++;
		}
		write(1, "\n", 1);
		r++;
	}
}

void	complete_rows(char *row, char **tab)
{
	int cpt;

	cpt = 0;
	while (cpt < 4)
	{
		if (row[cpt] == '1' && row[cpt + 4] == '2')
			tab[cpt][3] = '3';
		else if (row[cpt] == '2' && row[cpt + 4] == '3')
			tab[cpt][1] = '4';
		if (row[cpt] == '4')
		{
			tab[cpt][0] = '1';
			tab[cpt][1] = '2';
			tab[cpt][2] = '3';
			tab[cpt][3] = '4';
		}
		else if (row[cpt] == '1')
			tab[cpt][0] = '4';
		cpt++;
	}
}

void	complete_rows2(char *row, char **tab)
{
	int cpt;

	cpt = 4;
	while (cpt < 8)
	{
		if (row[cpt] == '1' && row[cpt - 4] == '2')
			tab[cpt - 4][0] = '3';
		else if (row[cpt] == '2' && row[cpt - 4] == '3')
			tab[cpt - 4][2] = '4';
		if (row[cpt] == '4')
		{
			tab[cpt - 4][3] = '1';
			tab[cpt - 4][2] = '2';
			tab[cpt - 4][1] = '3';
			tab[cpt - 4][0] = '4';
		}
		else if (row[cpt] == '1')
			tab[cpt - 4][3] = '4';
		cpt++;
	}
}

void	complete_cols(char *col, char **tab)
{
	int cpt;

	cpt = 0;
	while (cpt < 4)
	{
		if (col[cpt] == '1' && col[cpt + 4] == '2')
			tab[3][cpt] = '3';
		else if (col[cpt] == '2' && col[cpt + 4] == '3')
			tab[1][cpt] = '4';
		if (col[cpt] == '4')
		{
			tab[0][cpt] = '1';
			tab[1][cpt] = '2';
			tab[2][cpt] = '3';
			tab[3][cpt] = '4';
		}
		else if (col[cpt] == '1')
			tab[0][cpt] = '4';
		cpt++;
	}
}

void	complete_cols2(char *col, char **tab)
{
	int	cpt;

	cpt = 4;
	while (cpt < 8)
	{
		if (col[cpt] == '1' && col[cpt - 4] == '2')
			tab[1][cpt - 4] = '3';
		else if (col[cpt] == '2' && col[cpt - 4] == '3')
			tab[2][cpt - 4] = '4';
		if (col[cpt] == '4')
		{
			tab[3][cpt - 4] = '1';
			tab[2][cpt - 4] = '2';
			tab[1][cpt - 4] = '3';
			tab[0][cpt - 4] = '4';
		}
		else if (col[cpt] == '1')
			tab[3][cpt - 4] = '4';
		cpt++;
	}
}

int		count_char(int row, int col, char **tab, char ch)
{
	int res;
	int r;
	int c;

	res = 0;
	r = 0;
	while (r < row)
	{
		c = 0;
		while (c < col)
		{
			if (tab[r][c] == ch)
				res++;
			c++;
		}
		r++;
	}
	return (res);
}

void	check_line(int row, int col, char **tab, int cpt)
{
	int i;
	int check;
	int ch;
	int save;

	while (cpt < row)
	{
		i = 0;
		check = 0;
		ch = 0;
		while (i < col)
		{
			ch = ch + tab[cpt][i] - '0';
			if (tab[cpt][i] == '0')
			{
				check++;
				save = i;
			}
			i++;
		}
		if (check == 1)
			tab[cpt][save] = (10 - ch) + '0';
		cpt++;
	}
}

void	check_col(int row, int col, char **tab, int cpt)
{
	int i;
	int check;
	int ch;
	int save;

	while (cpt < col)
	{
		i = 0;
		check = 0;
		ch = 0;
		while (i < row)
		{
			ch = ch + tab[i][cpt] - '0';
			if (tab[i][cpt] == '0')
			{
				check++;
				save = i;
			}
			i++;
		}
		if (check == 1)
			tab[save][cpt] = (10 - ch) + '0';
		cpt++;
	}
}

void	check(int row, int col, char **tab, int cpt)
{
	int	r;
	int	c;
	int	rr;
	int	cc;

	rr = 0;
	cc = 0;
	if (count_char(4, 4, tab, cpt) == 3)
	{
		r = -1;
		while (++r < row)
		{
			c = -1;
			while (++c < col)
			{
				if (tab[r][c] == cpt)
				{
					rr += r;
					cc += c;
				}
			}
		}
		tab[6 - rr][6 - cc] = cpt;
	}
}

void	check_and_change(int row, int col, char **tab)
{
	char	cpt;

	cpt = '1';
	while (cpt <= '4')
	{
		check(row, col, tab, cpt);
		cpt++;
	}
}

char	*mkrow(char **argv)
{
	char	*row;
	int		i;
	int		j;

	row = (char*)malloc(sizeof(char) * 8);
	i = 0;
	j = 0;
	while (j < 8)
	{
		row[j] = argv[1][i];
		j++;
		i += 2;
	}
	return (row);
	free(row);
}

char	*mkcol(char **argv)
{
	char	*col;
	int		i;
	int		j;

	col = (char*)malloc(sizeof(char) * 8);
	i = 16;
	j = 0;
	while (j < 8)
	{
		col[j] = argv[1][i];
		j++;
		i += 2;
	}
	return (col);
	free(col);
}

char	**mktab(int n)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * n);
	while (i < n)
		tab[i++] = (char *)malloc(sizeof(char) * n);
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			tab[i][j] = '0';
			j++;
		}
		i++;
	}
	return (tab);
	i = 0;
	while (i < n)
		free(tab[i++]);
	free(tab);
}

void	rush01(char **argv)
{
	char	**tab;
	char	*row;
	char	*col;
	int		cpt;

	tab = mktab(4);
	row = mkrow(argv);
	col = mkcol(argv);
	complete_rows(row, tab);
	complete_rows2(row, tab);
	complete_cols(col, tab);
	complete_cols2(col, tab);
	cpt = 0;
	while (cpt <= 16)
	{
		check_and_change(4, 4, tab);
		check_line(4, 4, tab, 0);
		check_col(4, 4, tab, 0);
		cpt++;
	}
	prnt(4, 4, tab);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "Error\n", 6);
	}
	rush01(argv);
}
