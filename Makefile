CC=gcc
BINS=runDB
BIN_PATH=src/$(BINS)
CFLAGS=-Iheaders 

all: $(BIN_PATH)

$(BIN_PATH): src/runDB.c headers/runDB.h
	$(CC) $(CFLAGS) -o $(BIN_PATH) src/runDB.c

clean:
	rm -f $(BIN_PATH)
