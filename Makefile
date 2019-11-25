# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javrodri <javrodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 08:29:56 by javrodri          #+#    #+#              #
#    Updated: 2019/11/18 08:44:37 by javrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS 		= ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_memset.c\
		ft_strncat.c ft_strchr.c ft_strcpy.c ft_strdup.c ft_strlcat.c\
		ft_strlen.c ft_strncat.c ft_strncpy.c ft_strrchr.c ft_atoi.c ft_strnstr.c\
		ft_strlcpy.c ft_strncmp.c ft_calloc.c ft_isalpha.c ft_isupper.c\
		ft_islower.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
		ft_toupper.c ft_tolower.c ft_substr.c ft_memcpy.c ft_putstr_fd.c\
		ft_putchar_fd.c ft_memalloc.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_strjoin.c ft_strcat.c ft_strtrim.c ft_strmapi.c ft_itoa.c ft_split.c
		
	
BONUSSRC 	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstclear_bonus.c\
		ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c 
		 
GCC			= @gcc -Wall -Wextra -Werror -c

OBJS 		= $(SRCS:.c=.o)

OBJSBONUS 	= $(BONUSSRC:.c=.o)

INCLUDES 	= ./

all: $(NAME)

$(NAME) : $(SRCS) libft.h
			$(GCC) -I$(INCLUDES) -c $(SRCS)
			-@ar rc $(NAME) $(OBJS)
			-@ranlib $(NAME)
			
bonus: $(SRCS) $(BONUSSRC) libft.h
		 	$(GCC) -I$(INCLUDES) -c $(BONUSSRC) $(SRCS)
			-@ar rc $(NAME) $(OBJS) $(OBJSBONUS)
			-@ranlib $(NAME)
clean:
			-@$(RM) $(OBJS) $(OBJSBONUS)

fclean: clean
			-@$(RM) $(NAME)

re: 		fclean all
