CC 		= gcc
CFLAGS	= -Wall -Wextra -Werror -c
TARGET	= libft.a
AR      = ar crs
SRCDIR	= srcs
INCDIR	= ./includes/
RM		= rm -f
SOURCES	= $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_swap.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_strcmp.c
OBJECTS	= $(SOURCES:.c=.o)

all:		${TARGET}

%.o: %.c
		${CC} ${CFLAGS} $< -o $@ -I $(INCDIR)

$(TARGET):	$(OBJECTS)
	${AR} $@ $(OBJECTS)

clean:
	${RM} ${OBJECTS}

fclean:	clean
	${RM} ${TARGET}

re:		fclean all

.PHONY:		all clean fclean re
