CC := g++
CLIB := "-lpigpiod_if2"
OPT := -O3 -mtune=native -march=native
motor_output.o: motor_output.h motor_output.cpp
	$(CC) $(OPT) $(CLIB) -c motor_output.cpp
clean:
	rm -f *.o

test: test_motor_output.o motor_output.o
	$(CC) $(OPT) $(CLIB) -o $@ test_motor_output.o motor_output.o

test_motor_output.o: test_motor_output.cpp
	$(CC) $(OPT) $(CLIB) -c $<

