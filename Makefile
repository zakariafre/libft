NAME = libft.a
CC = gcc
GFLAGS = -Wall -Wextra -Werror
SRC=ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_bzero.c \
	ft_memset.c	\
	ft_strlen.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_strlcpy.c\
	ft_strlcat.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strncmp.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_strnstr.c\
	ft_atoi.c\
	ft_calloc.c\
	ft_strdup.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_itoa.c\
	ft_strmapi.c\
	ft_striteri.c
	
OBJECTS = $(SRC:%.c=%.o)
AR = ar rcs
RM = rm -f 

all : $(NAME)

$(NAME) : $(OBJECTS)
	@$(AR) $(NAME) $(OBJECTS) 


%.o : %.c 
	@$(CC) $(GFLAGS) -c $< -o $@

test : $(NAME) main.c
	@$(CC) $(GFLAGS) main.c $(NAME) -o main

fclean : clean
	@$(RM) $(OBJECTS) $(NAME)

clean : 
	@$(RM) main
