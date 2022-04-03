# Program name
NAME	= libunit
NAME^^	= $(shell echo $(NAME) | tr 'a-z' 'A-Z')

# Directories

TST_DIR	= real_tests/
LIB_DIR	= to_test/
INC_DIR	= inc/
SRC_DIR	= src/
OBJ_DIR	= obj/

# Sources
__SRCS	= $(shell find . -type f -path "./src/*.c" | cut -c 7-)

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
	make -s -C $(TST_DIR)strlen
	mkdir -p $(OBJ_DIR)$(TST_DIR)strlen
	cp $(TST_DIR)strlen/*.o $(OBJ_DIR)$(TST_DIR)strlen
#		TEST SPLIT
#	make -s -C $(TST_DIR)split
#	mkdir -p $(OBJ_DIR)$(TST_DIR)split
#	cp $(TST_DIR)split/*.o $(OBJ_DIR)$(TST_DIR)split

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
	$(shell find . -type d -path "./real_tests/*" -exec make fclean -s -C {} +)
	make -s -C $(LIB_DIR) fclean
	rm -rf $(NAME) $(OBJ_DIR)
	printf "$(FG_GRAY)[ $(NAME^^) ] $(FG_MAGE)Program files cleaned.$(RESET)\n"

re: fclean all

.PHONY: all log clean fclean re
.SILENT: