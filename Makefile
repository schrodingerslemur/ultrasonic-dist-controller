CC=gcc
CFLAGS=-Wall -Wextra -std=c11
OBJS=main.o sensor.o pid.o motor.o uart.o

all: app

app: $(OBJS)
	$(CC) $(CFLAGS) -o app $(OBJS)

clean:
	rm -f *.o app
