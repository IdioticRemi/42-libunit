# Test Name
NAME	= strlen

# Sources
__SRCS	= $(shell find . -type f -path "./*.c")

SRCS	= $(__SRCS)
OBJS	= $(__SRCS:.c=.o)

# Compile
CC		= clang

CFLAGS	= -Wall -Werror -Wextra
INCLUDE	=
LIBS	=

# Color

RESET	= \033[0;0m
FG_WHIT	= \033[0;97m
FG_GRAY	= \033[0;37m
FG_MAGE	= \033[0;35m
FG_CYAN	= \033[0;36m
FG_GREE	= \033[0;32m
FG_REDD	= \033[0;31m

# Rules
all: $(NAME)

%.o: %.c ../../inc/libunit.h test_$(NAME).h
	@$(CC) $(CFLAGS) $(INCLUDE) -I ../../inc/ -I ./ -c $< -o $@
	@printf "$(FG_GRAY).$(RESET)"

$(NAME): $(OBJS)
	@printf "\n";

clean:
	@rm -f $(OBJS)

fclean:
	@rm -f $(OBJS)

re: fclean all

.PHONY: all log clean fclean re