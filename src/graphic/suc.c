/*
** suc.c for zappy in /home/videau_f/rendu/PSU/PSU_2015_zappy/src/graphic
** 
** Made by Florian Videau
** Login   <videau_f@epitech.net>
** 
** Started on  Sat Jun 25 02:59:52 2016 Florian Videau
** Last update Sat Jun 25 10:13:59 2016 Florian Videau
*/

#include "graphics.h"
#include "send_msg.h"

int	my_suc(S_CMD_GRAPH_MST_ARGS)
{
  send_msg(client_fd, "suc\n");
  return (0);
}
