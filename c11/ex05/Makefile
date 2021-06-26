NAME = do-op
CC = @gcc
CFLAGS = -Wall -Werror -Wextra
SRC_DIR = ./srcs/
SRC_FILES = ft_putstr.c \
			ft_atoi.c \
			ft_calc.c \
			ft_do_op.c \
			ft_putchar.c \
			ft_putnbr.c \
			ft_calcs.c \
			main.c
OBJ_FILES = $(SRC_FILES:.c=.o)
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(addprefix $(SRC_DIR), $(OBJ_FILES))
HEADER = -I includes/
RM = @rm -rf

all:  obj $(NAME)

obj:  $(SRCS)

 $(SRC_DIR)%.o: $(SRC_DIR)%.c
	 $(CC) $(CFLAGS) -c $< -o $@ $(HEADER)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:	
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

.PHONY: all clean fclean
