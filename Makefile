FLAGS = -Wall -g -std=gnu99

all : validate_sin

validate_sin : validate_sin.o sin_helpers.o
	gcc ${FLAGS} -o $@ $^

%.o : %.c sin_helpers.h
	gcc ${FLAGS} -c $<

clean :
	-rm *.o validate_sin
