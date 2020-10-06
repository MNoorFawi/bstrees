all: buildlib buildexe

sc = ./source_code/

buildlib:
	$(shell mkdir -p $(sc)lib)
	gcc -fPIC -c $(sc)bstree.c -o $(sc)bstree.o
	gcc -shared $(sc)bstree.o -o $(sc)lib/libbstree.so
	rm $(sc)*.o

buildexe:
	gcc -c prog.c
	gcc prog.o -L$(sc)lib -lbstree -o prog
	rm *.o
	export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$(sc)lib