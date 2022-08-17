#Makefile
SRC_DIR=./src
SORTS_DIR=./src/sorts
C_COMP=clang

sorts.o:
		$(C_COMP) -c -I$(SORTS_DIR) $(SORTS_DIR)/sorts.c -o $(SORTS_DIR)/sorts.o

main: sorts.o 
		$(C_COMP) -I$(SORTS_DIR) $(SORTS_DIR)/sorts.o $(SRC_DIR)/main.c

clean:
		rm $(SRC_DIR)/*.o $(SORTS_DIR)/*.o