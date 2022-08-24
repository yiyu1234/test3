TARGET ?= run
OBJS:=main.o tongxun.o 
CC:= cc
CFLAGS:= -c -o

$(TARGET):$(OBJS)
	$(CC) $(OBJS) -o $(TARGET)
%.o:%.c
	$(CC) $< $(CFLAGS) $@
clean:
	rm $(OBJS) $(TARGET)$(data.txt)