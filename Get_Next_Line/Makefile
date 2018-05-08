#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdubinki <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/02 12:56:23 by vdubinki          #+#    #+#              #
#    Updated: 2017/10/02 12:56:24 by vdubinki         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = read

LIB = ft

LIBDIR = libft

SRC = get_next_line.c main.c

OBJ = $(SRC:.c=.o)

INC = *.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(OBJ): $(INC)

.c.o:
	@gcc $(FLAGS) -c $<

$(NAME): $(OBJ)
	@make -C $(LIBDIR)
	@gcc $(FLAGS) -o $@ -L$(LIBDIR) -l$(LIB) $^

clean:
	@make clean -C $(LIBDIR)
	@rm -f $(OBJ)

fclean: clean
	@make fclean -C $(LIBDIR)
	@rm -f $(NAME)

re: fclean all
