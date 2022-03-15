CC = g++
CFLAGS = -Wall
REP_MAP = src/src/map
REP_CHARACTER = src/src/characters
REP_ITEM = src/src/items
EXEC_NAME = game
OBJ_FILES = $(REP_MAP)/*.cpp $(REP_CHARACTER)/*.cpp $(REP_ITEM)/*.cpp src/main.o 

all : $(EXEC_NAME)

$(EXEC_NAME) : $(OBJ_FILES)
	$(CC) -o $(EXEC_NAME) $(OBJ_FILES)

%.o : %.cpp
	$(CC) -o $@ -c $<