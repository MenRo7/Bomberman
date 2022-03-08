CC = g++
CFLAGS = -Wall
REP_SOURCE = src/src/ 
EXEC_NAME = game
OBJ_FILES = 

all : &(EXEC_NAME)
$(EXEC_NAME) : $(OBJ_FILES)
	$(CC) -o $(EXEC_NAME) &(EXEC_FILES)

%.o : %.cpp
	$(CC) -o $@ -c $<