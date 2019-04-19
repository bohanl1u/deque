all: test_deque plane_boarding

test_deque: test_deque.o
	g++ -Wall -Werror -std=c++11 -o test_deque test_deque.o -pthread -lgtest

test_deque.o: test_deque.cc deque.h
	g++ -Wall -Werror -std=c++11 -c test_deque.cc

plane_boarding: plane_boarding.o
	g++ -Wall -Werror -std=c++11 -o plane_boarding plane_boarding.o

plane_boarding.o: plane_boarding.cc deque.h
	g++ -Wall -Werror -std=c++11 -c plane_boarding.cc

clean:
	rm -f test_deque test_deque.o plane_boarding plane_boarding.o