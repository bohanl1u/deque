test_deque: test_deque.o
	g++ -Wall -Werror -std=c++11 -o test_deque test_deque.o -pthread -lgtest

test_deque.o: test_deque.cc deque.h
	g++ -Wall -Werror -std=c++11 -c test_deque.cc

clean:
	rm -f test_deque test_deque.o