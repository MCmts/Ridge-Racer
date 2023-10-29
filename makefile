bin/racer : src/racer.cpp include/* 
	c++ src/racer.cpp -o bin/racer -I include -lcurses

run: bin/racer
	./bin/racer
	