# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kparis <kparis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/09 15:54:25 by kparis            #+#    #+#              #
#    Updated: 2020/03/18 23:38:58 by kparis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_strmapi.c \
		ft_itoa.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putendl.c \
		ft_convert_base.c \
		ft_realloc_int.c \
		ft_realloc_char.c \
		ft_str_tab_len.c \
		ft_free_str_tab.c \
		ft_realloc_char_tab.c \
		get_next_line.c

OBJ = $(SRC:.c=.o)
CFLAGS += -Wall -Wextra -Werror -g -fsanitize=address -I./
CC = gcc
.c.o:
		@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
$(NAME):	$(OBJ)
			@ar -rc $(NAME) $(OBJ)
			@echo "\033[92mLibft Done\033[0m"
all:		$(NAME)
clean:
			@rm -f $(OBJ)
			@echo "\033[92mLibft Clean\033[0m"
fclean:		clean
			@rm -f $(NAME)
re:		fclean all
.PHONY:		all clean fclean re