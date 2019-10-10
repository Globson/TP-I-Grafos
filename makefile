all: main.cpp Sources/Funcs.cpp Sources/Arvore.cpp
	g++ main.cpp -o EXEC Sources/Funcs.cpp  Sources/Arvore.cpp

run: EXEC
	./EXEC

rm: EXEC
	rm EXEC
