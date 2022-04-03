# Test Name
NAME	= to_test

# Sources
__SRCS	= $(shell find . -type f -path "./*.c")

SRCS	= $(__SRCS)
OBJS	= $(__SRCS:.c=.o)

# Compile
CC		= clang

CFLAGS	= -Wall -Werror -Wextra
INCLUDE	= -I ../inc/ -I ./

# Rules
all: $(NAME)

%.o: %.c $(NAME).h
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS)

clean:
	@rm -f $(OBJS)

fclean:
	@rm -f $(OBJS)

re: fclean all

.PHONY: all log clean fclean re