.PHONY: ALL
ALL: fractal

fractal: main.o
	g++ $< -o $@

main.o: main.cpp
