/*
** find_egg.c for zappy in /home/videau_f/rendu/PSU/PSU_2015_zappy/src
** 
** Made by Florian Videau
** Login   <videau_f@epitech.net>
** 
** Started on  Fri Jun 17 15:41:33 2016 Florian Videau
** Last update Sun Jun 26 13:24:58 2016 Florian Videau
*/

#include <stddef.h>
#include <string.h>
#include "server.h"
#include "types/box.h"
#include "types/egg.h"
#include "types/vector.h"

static t_eggList	*is_egg_here(const size_t id, t_eggList *eggList)
{
  t_eggList		*tmp;
  int			i;

  tmp = eggList;
  i = 0;
  while (tmp && (tmp != eggList || i == 0))
    {
      i = 1;
      if (tmp->egg->id == id)
	return (tmp);
      tmp = tmp->next;
    }
  return (NULL);
}

t_eggList	*find_egg_from_id(const size_t id)
{
  t_eggList	*ret;
  long		i;
  long		j;

  i = -1;
  ret = NULL;
  while (g_map[++i] && (j = -1))
    while (++j < g_args.x)
      if ((ret = is_egg_here(id, g_map[i][j].eggs)))
	  return (ret);
  return (NULL);
}
