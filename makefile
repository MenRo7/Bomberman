CC = g++
CFLAGS = -Wall
REP_SOURCE = src/src/map
EXEC_NAME = game
OBJ_FILES = $(REP_SOURCE)/*.cpp src/main.o

all : $(EXEC_NAME)

$(EXEC_NAME) : $(OBJ_FILES)
	$(CC) -o $(EXEC_NAME) $(OBJ_FILES)

%.o : %.cpp
	$(CC) -o $@ -c $<