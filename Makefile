CFLAGS	:= -Wall
OBJS	:= main.o fallthrough.o
EXE	:= tests

all: $(EXE)
clean:
	rm -f $(EXE) $(OBJS)

fallthrough.o: fallthrough.c
	$(CC) $(CFLAGS) -Wimplicit-fallthrough -c $<

main.o: main.c
	$(CC) $(CFLAGS) -c $<

$(EXE): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
