##
## EPITECH PROJECT, 2023
## my_sokoban
## File description:
## Makefile
##

CC	=	gcc -c -g3

ARRC	=	ar rc

SRCS	=	src/algorithm/key_hash.c		\
		src/dump/hashtable_dump.c		\
		src/manager/hashtable_delete.c		\
		src/manager/hashtable_insert.c		\
		src/provider/hashtable_provider.c	\
		src/search/hashtable_search.c		\
		src/utils/my_put_int.c			\
		src/utils/my_str_dup.c			\
		src/utils/my_str_utils.c		\

HRCS	=	include

TARGET	=	libhashtable.a

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-I $(HRCS)

all:	$(TARGET)

$(TARGET):	$(OBJS)
	$(ARRC) $(TARGET) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(TARGET)

re:	fclean all

.PHONY:	all clean fclean re
