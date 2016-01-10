#ifndef STRUCT_H
# define STRUCT_H

typedef struct          s_maill
{
  int x;
  int y;
  int value;
  struct s_maill   *next;
  struct s_maill   *before;
}                                       t_maill;

#endif
