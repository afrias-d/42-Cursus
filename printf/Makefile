NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f
SRC_DIR = ./
OBJ_DIR = ./
INCLUDES_DIR = .
FILES = ft_printf \
			ft_print_chars \
			ft_print_ints \
			ft_print_uns \
			ft_print_hex \
			ft_print_ptr \

SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))

LIBFTPATH = ./Libft

LIBFT = $(LIBFTPATH)/libft.a

%.o: %.c
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
		$(AR) $@ $^

$(LIBFT):
	make -C $(LIBFTPATH) all

all: $(NAME)

clean:
	$(RM) $(OBJS)
	make -C $(LIBFTPATH) clean

fclean: clean
	$(RM) $(NAME)
	make -C $(LIBFTPATH) fclean

re: fclean all

.PHONY: all clean fclean re libft