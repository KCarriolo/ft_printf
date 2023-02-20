SRCS	= ft_printf.c \
		  ft_flags.c \
		  ft_sputchar.c \
		  ft_sputstr.c \
		  ft_sputnbr.c \
		  ft_sputunbr.c \
		  ft_toui.c \
		  ft_puthex.c \
		  ft_putptr.c \

OBJS	= $(SRCS:.c=.o)

NAME	= libftprintf.a

CC		= -cc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -rf

AR		= ar rcs

LIBP	= libft/

.c.o:
		@$(CC) $(FLAGS) -c $<

$(NAME): $(OBJS)
	@cd $(LIBP) && make && cp libft.a ../$(NAME)
	@$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	@$(RM) $(OBJS)
	@cd $(LIBP) && make clean

fclean: clean
	@$(RM) $(NAME)
	@cd $(LIBP) && make fclean

re: fclean all

.PHONY:	all clean fclean re
