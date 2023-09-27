# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksongchu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 01:03:26 by ksongchu          #+#    #+#              #
#    Updated: 2023/09/21 17:03:39 by ksongchu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = main.c \
      add_index.c \
      case_4.c \
      case_5.c \
      ccase_one.c \
      ccase_two.c \
      check_chr.c \
      check_dup.c \
      ft_atoi_cb.c \
      ft_free.c \
      ft_lst.c \
      ft_mainout.c \
      ft_single_out.c \
      ft_split.c \
      get_error.c \
      get_list.c \
      is_ascen.c \
      lowlen_case.c \
      lowlen_utils.c \
      manda_utils.c \
      sort.c

OBJ = $(SRC:%.c=%.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
