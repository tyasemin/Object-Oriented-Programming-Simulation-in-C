all: compile run

compile:
	gcc -I ./include -o ./lib/shares.o -c ./src/shares.c 
	gcc -I ./include -o ./lib/bank.o -c   ./src/bank.c  
	gcc -I ./include -o ./lib/main.o -c  ./src/main.c 
    
	
	gcc -I ./include ./src/shares.c ./src/bank.c ./src/main.c -o ./bin/program 
run:
	./bin/program