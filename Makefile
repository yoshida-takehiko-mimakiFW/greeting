TARGET = main
OBJS = main.o greeting.o

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) -c $<

clean:
	$(RM) $(TARGET) $(OBJS)
