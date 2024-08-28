CC=gcc
BINS=runDB
BIN_PATH=src/$(BINS)

all: $(BIN_PATH)

$(BIN_PATH): src/runDB.c
	$(CC) -o $(BIN_PATH) src/runDB.c

clean:
	rm -f $(BIN_PATH)
