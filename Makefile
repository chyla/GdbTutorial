.PHONY: clean all


all: break loop watch navigation threads

break: break.cpp
	$(CXX) -O0 -g break.cpp -o break

loop: loop.cpp
	$(CXX) -O0 -g loop.cpp -o loop

watch: watch.cpp
	$(CXX) -O0 -g watch.cpp -o watch

navigation: navigation.cpp
	$(CXX) -O0 -g navigation.cpp -o navigation

threads: threads.cpp
	$(CXX) -O0 -std=c++11 -pthread -g threads.cpp -o threads

clean:
	rm -fv break loop watch navigation threads

