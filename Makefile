# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: engirald <engirald@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/10 20:13:14 by engirald          #+#    #+#              #
#    Updated: 2023/08/10 20:24:47 by engirald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= push_swap
LIBFT_PATH		= ./sources/libft
SORT_PATH		= ./sources/sort
RADIX_PATH		= ./sources/radix
INCLUDE_PATH	= ./includes

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

SRCS_TREAT	=./sources/treat/treat_argv.c ./sources/treat/treat_list.c

SRCS_MOVS	= ./sources/movements/swap.c ./sources/movements/push.c ./sources/movements/reverse.c \
				./sources/movements/rotate.c

SRCS_RADIX  = radix.c radix_aux.c

SRCS_SORT	= sort.c sort_aux.c

SRCS		= main.c $(SRCS_TREAT) $(SRCS_MOVS) $(addprefix $(SORT_PATH)/, $(SRCS_SORT))\
				$(addprefix $(RADIX_PATH)/, $(SRCS_RADIX))

OBJS		= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
				@make -sC $(LIBFT_PATH)
				@$(CC) $(CFLAGS) $(OBJS) $(LIBFT_PATH)/libft.a -o $(NAME)

%.o: %.c
				@$(CC) $(CFLAGS) -c $< -o $@

norm:
				@norminette $(SRCS)

clean:
				@make -sC $(LIBFT_PATH) clean
				@$(RM) $(OBJS)
				
fclean: clean
				@make -sC $(LIBFT_PATH) fclean
				@$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
