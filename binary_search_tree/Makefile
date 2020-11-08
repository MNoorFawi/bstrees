all: build_bst buildexe clean

build_bst:
	$(shell mkdir -p ./libs)
	gcc -fPIC -c bstree.c -o bstree.o
	gcc -shared bstree.o -o ./libs/libbstree.so
		
buildexe:
	gcc prog.c -L./libs -lbstree -o prog
	export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:./libs
	
clean:
	rm *.o