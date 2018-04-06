/*
** requirement.c for  in /home/clem/Tek1/Piscine_SR/ADM_projTester_2016
** 
** Made by clem
** Login   <clement.da-purificacao@epitech.eu>
** 
** Started on  Wed Jun 21 09:15:00 2017 clem
** Last update Sat Jun 24 14:02:00 2017 clem
*/

#include <unistd.h>
#include <sys/wait.h>

void	my_ps_synthesis()
{
  fork() ? wait(0) : execlp("ps", "ps", NULL);
}
