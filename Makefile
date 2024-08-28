CC=gcc
BINS=runDB
BIN_PATH=src/$(BINS)
CFLAGS=-Iheaders
SRC=src/runDB.c src/students.c  # Include students.c as part of the source files

all: $(BIN_PATH)

$(BIN_PATH): $(SRC)
	$(CC) $(CFLAGS) -o $(BIN_PATH) $(SRC)

clean:
	rm -f $(BIN_PATH)
