NAME	= libftprintf.a

SRCS	= mandatory/ft_isdigit.c  mandatory/ft_print_type.c mandatory/ft_putnbr_fd.c  mandatory/ft_type.c mandatory/ft_atoi.c mandatory/ft_nub_size.c \
		  mandatory/ft_printf.c mandatory/ft_putstr_fd.c mandatory/ft_print_hex.c mandatory/ft_putchar_fd.c mandatory/ft_strlen.c \

SRCS_B	= bonus/ft_isdigit.c  bonus/ft_print_type.c bonus/ft_putnbr_fd.c  bonus/ft_type.c bonus/ft_atoi.c bonus/ft_nub_size.c \
		  bonus/ft_printf.c bonus/ft_putstr_fd.c bonus/ft_flags.c bonus/ft_print_hex.c bonus/ft_putchar_fd.c bonus/ft_strlen.c \
		  bonus/ft_putchar.c bonus/ft_putstr.c bonus/ft_putptr.c \
		  bonus/ft_field_0.c bonus/ft_putnbr.c bonus/ft_putunbr.c bonus/ft_putx_X.c

OBJS_B	= $(SRCS_B:.c=.o)

OBJS	= $(SRCS:.c=.o)

CC		= cc

FLGS	= -Wall -Wextra -Werror

LIB1	= ar -rcs

RM		= rm -f


all:		$(NAME)

$(NAME):	$(OBJS)
			$(LIB1) $(NAME) $(OBJS)

bonus:		fclean $(OBJS_B)
			$(LIB1) $(NAME) $(OBJS_B)

.c.o:
			$(CC) $(FLGS) -c $< -o ${<:.c=.o}

clean:
			$(RM) $(OBJS) $(OBJS_B)

fclean:		clean
			$(RM) $(NAME) 

re:			fclean all

.PHONY:		all bonus clean fclean re
