all: main.cpp Sources/Funcs.cpp Sources/Arvore.cpp Sources/Lista.cpp
	g++ main.cpp -o EXEC Sources/Funcs.cpp  Sources/Arvore.cpp Sources/Lista.cpp

run: EXEC
	./EXEC

rm: EXEC
	rm EXEC
