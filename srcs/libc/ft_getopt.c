/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getopt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 02:15:29 by kdumarai          #+#    #+#             */
/*   Updated: 2020/02/22 18:10:12 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

const char	*g_optarg;
int			g_optind = 1;
int			g_optopt;
int			g_opterr = 1;
int			g_optreset;

inline void			ft_getopt_error(const char **av, int opt, int type)
{
	const char	*typemsg;

	if (type == GETOPT_ERR_ILL)
		typemsg = ": illegal option -- ";
	else if (type == GETOPT_ERR_REQ)
		typemsg = ": option requires an argument -- ";
	else
		typemsg = "NULL";
	ft_putstr_fd(*av, STDERR_FILENO);
	ft_putstr_fd(typemsg, STDERR_FILENO);
	ft_putchar_fd((char)opt, STDERR_FILENO);
	ft_putchar_fd('\n', STDERR_FILENO);
}

inline static int	ft_getopt_arg(const char **a, \
									const char *bw, \
									const char *next)
{
	if (!*(g_optarg = bw + 1) && !next)
		return (GETOPT_ERR_REQ);
	else if (next)
	{
		g_optarg = next;
		*a = NULL;
	}
	g_optind++;
	return (0);
}

static int			ft_getopt_find_opt(const char **a, \
										const char *next, \
										const char *optstring)
{
	const char	*w;
	const char	*bw;
	int			rc;

	while (*++(*a))
	{
		bw = *a;
		g_optopt = (int)*bw;
		if (bw[1] == '\0')
		{
			g_optind++;
			*a = NULL;
		}
		if (!(w = ft_strchr(optstring, *bw)))
			return (GETOPT_ERR_ILL);
		if (w[1] == ':' && (rc = ft_getopt_arg(a, bw, next)) < 0)
			return (rc);
		else if (w[1] != ':')
			g_optarg = NULL;
		return ((int)*bw);
	}
	return (GETOPT_ERR_NOMORE);
}

int					ft_getopt(int ac, const char **av, const char *optstring)
{
	int					rc;
	static const char	*bw;
	const char			*next;

	while (g_optind < ac && *av[g_optind] == '-' && av[g_optind][1] != '-')
	{
		if (!bw)
			bw = av[g_optind];
		next = (g_optind + 1 < ac) ? av[g_optind + 1] : NULL;
		rc = ft_getopt_find_opt(&bw, next, optstring);
		if (rc < GETOPT_ERR_NOMORE)
		{
			if (g_opterr)
				ft_getopt_error(av, g_optopt, rc);
			g_optarg = NULL;
			return ('?');
		}
		if (rc == GETOPT_ERR_NOMORE)
		{
			bw = av[++g_optind];
			continue ;
		}
		return (rc);
	}
	return (GETOPT_ERR_NOMORE);
}
