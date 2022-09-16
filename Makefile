# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/08 23:48:51 by fsuomins          #+#    #+#              #
#    Updated: 2022/09/16 23:46:32 by fsuomins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS =  ft_isalpha.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_memset.c \
		ft_memmove.c \
		ft_memcpy.c \
		ft_bzero.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_memchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcpy.c \
		ft_memcmp.c \
		ft_strlcat.c \
		ft_strnstr.c \
		
		


INCLUDEH = .
OBJS = $(patsubst %.c, %.o, $(SRCS)) #trocando um certo padrão pór outro (.c por .o em todos os arquivos do SRCS)
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	@ar rcs $(NAME) $(OBJS) 

#o "s" cria um indice para os arquivos, e agiliza o processo de likagem
$(OBJS) : $(SRCS) libft.h
	@cc $(CFLAGS) -c $(SRCS) -I $(INCLUDEH) 

clean : 
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all
