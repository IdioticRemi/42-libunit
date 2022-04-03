# Program name
NAME	= libunit
NAME^^	= $(shell echo $(NAME) | tr 'a-z' 'A-Z')

# Directories

TST_DIR	= real_tests/
LIB_DIR	= to_test/
INC_DIR	= framework/inc/
SRC_DIR	= framework/
OBJ_DIR	= obj/

# Sources
__SRCS	= $(shell find . -type f -path "./framework/*.c" | cut -c 13-)

SRCS	= $(addprefix $(SRC_DIR), $(__SRCS))
OBJS	= $(addprefix $(OBJ_DIR), $(__SRCS:.c=.o))

# Compile
CC		= clang

CFLAGS	= -Wall -Werror -Wextra
INCLUDE	= -I $(INC_DIR)
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

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(INC_DIR)/libunit.h
	mkdir -p $(OBJ_DIR) $(SUBDIRS)
	printf "$(FG_GRAY)[ $(NAME^^) ] $(FG_WHIT)$@ $(FG_CYAN)\033[40G[.]$(RESET)\r"
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
	printf "$(FG_GRAY)[ $(NAME^^) ] $(FG_WHIT)$@ $(FG_GREE)\033[40G[✓]$(RESET)\n"

$(NAME): $(OBJS)
	ar rc $(NAME).a $(OBJS)
	ranlib $(NAME).a
	printf "$(FG_GRAY)[ $(NAME^^) ] $(FG_GREE)Built '$(NAME).a'.$(RESET)\n"

compile_tests:
	mkdir -p $(OBJ_DIR)
	mkdir -p $(OBJ_DIR)$(TST_DIR)

	printf "$(FG_GRAY)[ $(NAME^^) ] $(FG_WHIT)Compiling tests... $(FG_CYAN)\033[40G[.]$(RESET)\r"

#		COMPILE LIB TO TEST
	make -s -C $(LIB_DIR)
	mkdir -p $(OBJ_DIR)$(LIB_DIR)
	cp $(LIB_DIR)/*.o $(OBJ_DIR)$(LIB_DIR)
#		TEST STRLEN
	make -s -C $(TST_DIR)ft_split
	mkdir -p $(OBJ_DIR)$(TST_DIR)ft_split
	cp $(TST_DIR)ft_split/*.o $(OBJ_DIR)$(TST_DIR)ft_split
#		TEST SIG BONUS
	make -s -C $(TST_DIR)sig
	mkdir -p $(OBJ_DIR)$(TST_DIR)sig
	cp $(TST_DIR)sig/*.o $(OBJ_DIR)$(TST_DIR)sig

	printf "$(FG_GRAY)[ $(NAME^^) ] $(FG_WHIT)Compiled all the tests. $(FG_GREE)\033[40G[✓]$(RESET)\n"

test: all compile_tests
	$(eval OBJS := $(shell find . -type f -path "./obj/*.o"))
	$(CC) $(CFLAGS) $(INCLUDE) -o run_tests main.c $(OBJS) -L./ -lunit
	printf "$(FG_GRAY)[ $(NAME^^) ] $(FG_GREE)Built 'run_tests'.$(RESET)\n"
	printf "\n"
	./run_tests

clean:
	rm -rf $(OBJ_DIR)
	printf "$(FG_GRAY)[ $(NAME^^) ] $(FG_MAGE)Build objects cleaned.$(RESET)\n"

fclean:
	for d in ./real_tests/*; do ( make -s -C "$$d" fclean ) ; done
	make -s -C $(LIB_DIR) fclean
	rm -rf $(NAME).a $(OBJ_DIR) run_tests
	printf "$(FG_GRAY)[ $(NAME^^) ] $(FG_MAGE)Program files cleaned.$(RESET)\n"

re: fclean all

.PHONY: all log clean fclean re
.SILENT: