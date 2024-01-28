##
## EPITECH PROJECT, 2023
## my_sokoban
## File description:
## Makefile
##

CC	=	gcc -g3

LCRITERION	=	--coverage -lcriterion

VALGRIND	=	valgrind

SRCS	=	../src/algorithm/key_hash.c				\
			../src/dump/hashtable_dump.c			\
			../src/manager/hashtable_delete.c		\
			../src/manager/hashtable_insert.c		\
			../src/provider/hashtable_provider.c	\
			../src/search/hashtable_search.c		\
			../src/utils/my_put_int.c				\
			../src/utils/my_str_dup.c				\
			../src/utils/my_str_utils.c				\

TEST_SRCS	=	lcriterion/lcriterion_utils.c		\
				lcriterion/insert_test.c			\
				lcriterion/delete_test.c			\
				lcriterion/dump_test.c				\

MAIN_SRCS	=	main.c

HRCS	=	../include				\
			lcriterion/lcriterion.h	\

TARGET	=	hashtable

BUILD_DIR = build

OBJS	=	$(SRCS:.c=.o)
TEST_OBJS	=	$(TEST_SRCS:.c=.o)
MAIN_OBJS	=	$(MAIN_SRCS:.c=.o)

all:
	echo "USAGE\: make main OR make lcriterion"

$(TARGET):	$(OBJS) $(TEST_OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(TEST_OBJS) $(LCRITERION)

main:	$(OBJS) $(MAIN_OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(MAIN_OBJS)
	clear
	./$(TARGET)

mainv:	$(OBJS) $(MAIN_OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(MAIN_OBJS)
	clear
	$(VALGRIND) ./$(TARGET)

lcriterion:	$(OBJS) $(TEST_OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(TEST_OBJS) $(LCRITERION)
	clear
	./$(TARGET)

re:	fclean all

clean:
	rm -f $(OBJS)
	rm -f $(TEST_OBJS)
	rm -f $(MAIN_OBJS)
	rm -rf $(BUILD_DIR)

fclean:	clean
	rm -f $(TARGET)
