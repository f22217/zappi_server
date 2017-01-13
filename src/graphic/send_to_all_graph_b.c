/*
** send_to_all_graph_b.c for zappy in /home/videau_f/rendu/PSU/PSU_2015_zappy/src/graphic
** 
** Made by Florian Videau
** Login   <videau_f@epitech.net>
** 
** Started on  Sun Jun 26 00:31:45 2016 Florian Videau
** Last update Sun Jun 26 08:14:59 2016 Bastien DHIVER
*/

#include <sys/queue.h>
#include "server.h"
#include "graphics.h"
#include "types/vector.h"

void			send_all_graph_b(t_vect *pos, int (*fct)(S_CMD_GRAPH_B_ARGS))
{
  struct s_graph_listq	*tmp_graph;

  TAILQ_FOREACH(tmp_graph, &g_graph_listq, tailq)
    fct(tmp_graph->client_fd, pos);
}
