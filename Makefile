# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/19 10:49:35 by dgeorgiy          #+#    #+#              #
#    Updated: 2024/11/29 09:19:08 by dgeorgiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT = libft/libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
SRC = ft_printf \
	utils

SRCS = $(addsuffix .c, $(SRC))
OBJS = $(addsuffix .o, $(SRC))

#TEST_SRC = test_main.c for testing
#TEST_EXEC = test_ft_printf for testing

all: $(NAME)

# Rule to build the static library
$(NAME): $(LIBFT) $(OBJS)
	@cp $(LIBFT) $(NAME)
	@$(AR) $(NAME) $(OBJS)

$(LIBFT):
	$(MAKE) -C libft

.c.o:
	@$(CC) $(CFLAGS) -c -o $@ $<

# Rule to build the test executable
#test: $(NAME) $(TEST_SRC)
#	$(CC) $(CFLAGS) $(TEST_SRC) -L. -lftprintf -Llibft -lft -o $(TEST_EXEC)

clean:
	@rm -f $(OBJS)
	@$(MAKE) clean -C libft

fclean: clean
	@rm -f $(NAME) $(TEST_EXEC)
	@$(MAKE) fclean -C libft

re: fclean all

.PHONY: all clean fclean re test

