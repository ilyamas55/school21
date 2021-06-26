NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC_DIR = ./srcs/
SRC_FILES =	ft_putchar.c \
				ft_putstr.c \
				ft_strcmp.c \
				ft_strlen.c \
				ft_swap.c
OBJ_FILES = $(SRC_FILES:.c=.o)
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(addprefix $(SRC_DIR), $(OBJ_FILES))
HEADER = -I includes/
LIBC = ar rc
LIBR = ranlib
RM = rm -f
NOC         = \033[0m #non color
BOLD        = \033[1m
UNDERLINE   = \033[4m
BLACK       = \033[1;30m
RED         = \033[1;31m
GREEN       = \033[1;32m
YELLOW      = \033[1;33m
BLUE        = \033[1;34m
VIOLET      = \033[1;35m
CYAN        = \033[1;36m
WHITE       = \033[1;37m
all: obj $(NAME)

obj: $(SRCS)
	@echo "==============================================================="
	@echo "$(YELLOW)[  0%  ] Compiling... Wait a sec.$(NOC)"

$(SRC_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@ $(HEADER)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)
	$(LIBR) $(NAME)
	@echo "$(YELLOW)[ 100% ] Compilation of '$(NAME)' is done$(NOC)"
	@echo "==============================================================="
	@echo "$(CYAN)>>>   CHECK LIBRARY. \033[0m"
	@echo "$(CYAN)Make sure the '$(NAME)' library works $(NOC)"
	@echo "$(CYAN)compile the test program using the generated libft.a library $(NOC)"
	$(CC) $(CFLAGS) -o program.out test.c $(NAME)
	@echo "==============================================================="
	@echo "$(CYAN)>>>   CHECK PROGRAM './test' $(NOC)"
	./program.out
	@echo "==============================================================="

clean:
	@echo "==============================================================="
	@echo "$(RED) Objects remove!$(NOC)"
	/bin/rm -f $(OBJS)
	@echo "==============================================================="
	@echo "$(RED) Outs remove!$(NOC)"
	/bin/rm -f *.out
	@echo "==============================================================="

fclean: clean
	@echo "==============================================================="
	@echo "$(RED) $(NAME) remove!$(NOC)"
	/bin/rm -f $(NAME) program.out
	@echo "==============================================================="

re: fclean all

norm:	
	norminette -R CheckForbiddenSourceHeader */*.c
	@echo "==============================================================="
	norminette -R CheckDefine */*.h

.PHONY: all clean fclean re norm
