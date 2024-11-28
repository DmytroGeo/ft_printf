# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgeorgiy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/19 10:49:35 by dgeorgiy          #+#    #+#              #
#    Updated: 2024/11/26 14:10:09 by dgeorgiy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME = libftprintf.a
# CC = cc
# CFLAGS = -Wall -Wextra -Werror
# AR = ar rcs
# SRC = ft_printf \
# 		utils

# SRCS = $(addsuffix .c, $(SRC))
# OBJS = $(addsuffix .o, $(SRC))

# .c.o:
# 	@$(CC) $(CFLAGS) -c -o $@ $<

# $(NAME): $(OBJS)
# 	@$(AR) $@ $^

# clean:
# 	@rm -f $(OBJS)

# fclean: clean
# 	@rm -f $(NAME)

# re: fclean $(NAME)

# .PHONY: all clean fclean re

# Variables
NAME = libftprintf.a
TEST_EXEC = test_ft_printf
LIBFT = libft/libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
SRC = ft_printf \
	utils
SRCS = $(addsuffix .c, $(SRC))
OBJS = $(addsuffix .o, $(SRC))
TEST_SRC = test_main.c # Replace with your test main file

# Default rule to build the library
all: $(NAME)

# Rule to build the static library
$(NAME): $(LIBFT) $(OBJS)
	@cp $(LIBFT) $(NAME) # Start with libft.a contents
	$(AR) $(NAME) $(OBJS) # Add libftprintf objects

# Rule to build libft.a (inside libft directory)
$(LIBFT):
	$(MAKE) -C libft

# Rule to compile .c into .o
.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

# Rule to build the test executable
test: $(NAME) $(TEST_SRC)
	$(CC) $(CFLAGS) $(TEST_SRC) -L. -lftprintf -Llibft -lft -o $(TEST_EXEC)

# Clean object files
clean:
	rm -f $(OBJS)
	$(MAKE) clean -C libft

# Clean everything
fclean: clean
	rm -f $(NAME) $(TEST_EXEC)
	$(MAKE) fclean -C libft

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re test

