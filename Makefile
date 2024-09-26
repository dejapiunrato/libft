# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psevilla <psevilla@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/17 19:19:19 by psevilla          #+#    #+#              #
#    Updated: 2024/09/17 19:19:22 by psevilla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CCFLAGS = -Wall -Werror -Wextra
RM = rm -rf

SRCS = 	$(shell ls *.c | tr '\n' ' ')

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	@ar crs $(NAME) $(OBJS)

all: $(NAME)

%.o : %.c
	@$(CC) $(CCFLAGS) -c -o $@ $<
clean:
	@$(RM) $(OBJS)
fclean: clean
	@$(RM) $(NAME) 
re: fclean all 
.PHONY: all clean fclean reminar objetos
