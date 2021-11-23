CC = g++

build: main5

main5: *.cpp
	$(CC) -o $@ $^ -lm

run:
	./main5

clean:
	rm -f main5

exe:
	main5 run