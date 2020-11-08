# Binary Search Tree C Shared Library

Implementing **binary search tree** data structure in C as a shared library to be used in different C project easily.

#### Compile the library and the accompanied example program
```bash
make

gcc -fPIC -c bstree.c -o bstree.o
gcc -shared bstree.o -o ./libs/libbstree.so
gcc prog.c -L./libs -lbstree -o prog
export LD_LIBRARY_PATH=D_LIBRARY_PATH:./libs
rm *.o
```

#### Run the sample program
```bash
./prog


starting with an empty tree

tree now is not empty:
11 -> 12 -> 13 -> 19 -> 22 -> 91 -> 94 ->

try now to search for and delete some values: (0 means False while 1 is True)
search for value 13 --> 1
search for value 11 --> 1
tree size --> 7
remove value 13 -->
search again for value 13 --> 0
try again to remove value 13 -->
The value does not exist

print the table after the deletion
11 -> 12 -> 19 -> 22 -> 91 -> 94 ->
insert value 4
4 -> 11 -> 12 -> 19 -> 22 -> 91 -> 94 ->

retrieve all elements into an array
4 11 12 19 22 91 94

remove value 91 -->

table is now looking like:
4 -> 11 -> 12 -> 19 -> 22 -> 94 ->
```
