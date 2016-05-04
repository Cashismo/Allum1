/*
** allum1.h for allum1.h in /home/gassem_a/Allum1/CPE_2015_Allum1
**
** Made by aurelien gassemann
** Login   <gassem_a@epitech.net>
**
** Started on  Sat Feb 20 12:45:49 2016 aurelien gassemann
** Last update Sun Feb 21 22:46:02 2016 aurelien gassemann
*/

#ifndef MY_ALLUM1_H
# define MY_ALLUM1_H_

typedef struct	s_var
{
  int		i;
  int		j;
  int		k;
}		t_var;

void	aff_tab();
int	display_aff_status(int *tab);
int	first_aff(int *tab);
int	tab();
int	main(int argc, char **argv);
int	errors_about_lines(int line, int *tab, char *str);
int	check_errors(int line, int *tab);
int	errors_about_matches(char *nb_matches, int *tab, int line);
void	my_putchar(char c);
int	my_putstr(char *str);
int	my_atoi(const char *str);
int	ia(int line, int nb_matches, int *tab);
int	aff_ia(int *tab);
int	my_put_nbr(int nb);
int	player(int line, int nb_matches, int *tab);
int	my_strlen(char *str);
int	fill_buff_with_lines(char *string, char *buff);
char	*get_next_line(const int fd);
int	letters_for_lines(int line, int *tab, char *str);
int	letters_for_matches(char *nb_matches, int *tab, int line, char *str);

#endif /* !MY_ALLUM1_H_ */
