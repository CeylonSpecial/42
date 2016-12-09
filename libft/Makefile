# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csnyder <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/04 11:02:43 by csnyder           #+#    #+#              #
#    Updated: 2016/12/05 21:40:44 by csnyder          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft

CC := gcc

FLG := -c -Wall -Wextra -Werror -Includes

COMP := $(CC) $(FLG) 

SRC := ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
		ft_memmove.c ft_memset.c ft_putchar.c ft_putnbr.c ft_putstr.c \
		ft_strcat.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlcat.c \
		ft_strlen.c ft_strncat.c ft_strncpy.c ft_swap.c \

OBJ := ft_bzero.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o \
		ft_memmove.o ft_memset.o ft_putchar.o ft_putnbr.o ft_putstr.o \
		ft_strcat.o ft_strcmp.o ft_strcpy.o ft_strdup.o ft_strlcat.o \
		ft_strlen.o ft_strncat.o ft_strncpy.o ft_swap.o \

HEAD := libft.h

all: $(NAME)

clean:
		/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME).a

re: fclean all

$(NAME): 
		$(COMP) $(SRC)
		ar -rc $(NAME).a $(OBJ)
