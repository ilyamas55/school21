OUT = rush-02
SRC = main.c helper.c helper2.c error.c convert.c open_read.c
OBJ = $(SRC:.c=.o)

CC = gcc
CCFLAGS = -Wall -Werror -Wextra

.PHONY: all
all: $(OUT)

$(OUT): $(OBJ)
	$(CC) $(CCFLAGS) $(OBJ) -o $(OUT)

%.o: %.c mylib.h
	$(CC) $(CCFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -f $(OBJ)

.PHONY: fclean
fclean:
	rm -f $(OBJ) $(OUT)
