TARGET = main
OBJS = main.o greeting.o morning.o night.o

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) -c $<

clean:
	$(RM) $(TARGET) $(OBJS)
