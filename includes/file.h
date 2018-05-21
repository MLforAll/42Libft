/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 20:34:26 by kdumarai          #+#    #+#             */
/*   Updated: 2018/05/21 20:34:43 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_H
# define FILE_H

char		*get_basedir(const char *f_path);
char		*get_name_from_path(const char *path);
char		*get_name_from_path_2(const char *path);

#endif