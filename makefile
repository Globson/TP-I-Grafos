all: main.cpp Sources/Puzzle.cpp Sources/Arvore.cpp Sources/Lista.cpp
	g++ main.cpp -o EXEC Sources/Puzzle.cpp Sources/Arvore.cpp Sources/Lista.cpp

run: EXEC
	./EXEC

rm: EXEC
	rm EXEC
