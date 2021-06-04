all: compile run

compile:
	g++ -I ./include -o ./lib/Shares.o -c ./src/Shares.cpp 
	g++ -I ./include -o ./lib/Bank.o -c   ./src/Bank.cpp  
	g++ -I ./include -o ./lib/main.o -c  ./src/main.cpp 
    
	
	g++ -I ./include ./src/Shares.cpp ./src/Bank.cpp ./src/main.cpp -o ./bin/program 
run:
	./bin/program