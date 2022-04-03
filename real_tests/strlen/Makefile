# Test Name
NAME	= strlen

# Sources
__SRCS	= $(shell find . -type f -path "./*.c")

SRCS	= $(__SRCS)
OBJS	= $(__SRCS:.c=.o)

# Compile
CC		= clang

CFLAGS	= -Wall -Werror -Wextra
INCLUDE	= -I ./

# Rules
all: $(NAME)

%.o: %.c ../../inc/libunit.h test_$(NAME).h
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS)

clean:
	@rm -f $(OBJS)

fclean:
	@rm -f $(OBJS)

re: fclean all

.PHONY: all log clean fclean re