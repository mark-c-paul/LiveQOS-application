OBJ = main.o

bsys:	$(OBJ)
	g++ -o app $(OBJ)

main.o:	main.cc 
	g++ -c main.cc

