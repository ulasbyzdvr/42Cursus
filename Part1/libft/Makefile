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
			 ft_substr \
			 ft_strjoin \
			 ft_strtrim \
			 ft_split \
			 ft_itoa \
			 ft_strmapi \
			 ft_striteri \
			 ft_putchar_fd \
			 ft_putstr_fd \
			 ft_putendl_fd \
			 ft_putnbr_fd \
			 
Compiler	= gcc

CmpFlags	= -Wall -Wextra -Werror

OUTN	= libft.a

CFILES	= $(files:%=%.c)

OFILES	= $(files:%=%.o)

NAME	= libft.a

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