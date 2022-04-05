NAME	=	push_swap

NAME_B	=	checker

SRCS	=	src/push_swap.c	parser/init.c	parser/add.c \
			command/push.c	parser/check.c \
			command/swap.c	command/rotate.c	command/reverse.c \
			sort/big.c	sort/med.c		sort/optima.c \
			sort/min.c

SRCS_B	=	src/cheker.c		parser/check.c \
			parser/init.c 	parser/add.c 	command/push.c \
			command/swap.c		command/rotate.c 	command/reverse.c \
			sort/big.c		sort/med.c		sort/min.c

OBJ		=	$(SRCS:%.c=%.o)

OBJ_B	=	$(SRCS_B:%.c=%.o)

LIB		=	libft/libft.a

INCLUDE	=	include/

HEADER	=	push_swap.h

CC		=	gcc

FLAGS	=	-Wall -Wextra -Werror

RM		= rm -rf

.PHONY:		all	clean	fclean	re	bonus	libft

all:		libft $(NAME)

libft:
			@$(MAKE) -C libft/

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) $(OBJ) $(LIB) -o $(NAME)

%.o:		%.c $(INCLUDE)$(HEADER)
			$(CC) $(FLAGS)  -c $< -o $@ -I $(INCLUDE)

bonus:		libft $(OBJ_B)
			$(CC) $(FLAGS) $(OBJ_B) $(LIB) -o $(NAME_B)

clean:
			@$(RM) $(OBJ) $(OBJ_B)
			@$(MAKE) -C libft/ clean

fclean:		clean
			@$(MAKE) -C libft/ fclean
			@$(RM) $(NAME) $(NAME_B)

re:			fclean all


