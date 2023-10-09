# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ubeyazda <ubeyazda@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 22:33:17 by ubeyazda          #+#    #+#              #
#    Updated: 2023/10/09 22:33:17 by ubeyazda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Library		= libft

files 	   = ft_atoi \
			 ft_bzero \
			 ft_calloc \
			 ft_isalnum \
			 ft_isalpha \
			 ft_isascii \
			 ft_isdigit \
			 ft_isprint \
			 ft_memchr \
			 ft_memcmp \
			 ft_memcpy \
			 ft_memmove \
			 ft_memset \
			 ft_strchr \
			 ft_strdup \
			 ft_strlcat \
			 ft_strlcpy \
			 ft_strlen \
			 ft_strncmp \
			 ft_strnstr \
			 ft_strrchr \
			 ft_tolower \
			 ft_toupper \

Compiler	= gcc

CmpFlags	= -Wall -Wextra -Werror

OUTN	= $(Library).a

CFILES	= $(files:%=%.c)

OFILES	= $(files:%=%.o)

NAME	= $(OUTN)

$(NAME):
	$(Compiler) $(CmpFlags) -c $(CFILES) -I./
	ar -rc $(OUTN) $(OFILES)

all: $(NAME)

clean:
	rm -f $(NAME)
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re