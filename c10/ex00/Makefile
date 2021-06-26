NAME = ft_display_file
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC_DIR = ./srcs/
SRC_FILES = ft_putstr.c \
			main.c
OBJ_FILES = $(SRC_FILES:.c=.o)
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(addprefix $(SRC_DIR), $(OBJ_FILES))
HEADER = -I includes/
RM = rm -f

all: obj $(NAME)

obj: $(SRCS)

$(SRC_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@ $(HEADER)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:	
	/bin/rm -f $(OBJS)

fclean: clean
		/bin/rm -f $(NAME)

.PHONY: all clean fclean re norm
