# Binary Search Tree

Compile the program:
```bash
$ make

gcc -fPIC -c ./source_code/bstree.c -o ./source_code/bstree.o
gcc -shared ./source_code/bstree.o -o ./source_code/lib/libbstree.so
rm ./source_code/*.o
gcc -c prog.c
gcc prog.o -L./source_code/lib -lbstree -o prog
rm *.o
export LD_LIBRARY_PATH=D_LIBRARY_PATH:./source_code/lib
```

Run the program
```bash
$ ./prog

reading the data from file and inserting it into tree:

130,Cristiano Ronaldo,0.76
115,Lionel Messi,0.80
71,Raul Gonzalez,0.50
68,Robert Lewandowski,0.76
65,Karim Benzema,0.54
56,Ruud van Nistelrooy,0.77
50,Thierry Henry,0.45
49,Alfredo Di Stefano,0.84
48,Andriy Shevchenko,0.48
48,Zlatan Ibrahimovic,0.40
46,Thomas Muller,0.40

The created tree is:
46 -> 48 -> 48 -> 49 -> 50 -> 56 -> 65 -> 68 -> 71 -> 115 -> 130 ->

The number of nodes in tree are: 11

1.Search the tree for a Node
2.Remove a node from the tree
3.print the tree (inorder)
4.Count of nodes in the tree

 Please enter your choice: 1

Enter node ID:
71

the indx value is present in the tree
Node (number of goals) is: 71
Name is: Raul Gonzalez
Goal Ratio is: 0.500000

Do you want to continue (press 1 for yes or 0 to exit): 1

1.Search the tree for a Node
2.Remove a node from the tree
3.print the tree (inorder)
4.Count of nodes in the tree

 Please enter your choice: 2

Enter ID of node to be deleted:
50

Node 50 has been removed from the tree

Do you want to continue (press 1 for yes or 0 to exit): 1

1.Search the tree for a Node
2.Remove a node from the tree
3.print the tree (inorder)
4.Count of nodes in the tree

 Please enter your choice: 4

The number of nodes in tree are: 10

Do you want to continue (press 1 for yes or 0 to exit): 1

1.Search the tree for a Node
2.Remove a node from the tree
3.print the tree (inorder)
4.Count of nodes in the tree

 Please enter your choice: 3
46 -> 48 -> 48 -> 49 -> 56 -> 65 -> 68 -> 71 -> 115 -> 130 ->

Do you want to continue (press 1 for yes or 0 to exit): 1

1.Search the tree for a Node
2.Remove a node from the tree
3.print the tree (inorder)
4.Count of nodes in the tree

 Please enter your choice: 1

Enter node ID:
48

the indx value is present in the tree
Node (number of goals) is: 48
Name is: Andriy Shevchenko
Goal Ratio is: 0.480000

Do you want to continue (press 1 for yes or 0 to exit): 1

1.Search the tree for a Node
2.Remove a node from the tree
3.print the tree (inorder)
4.Count of nodes in the tree

 Please enter your choice: 2

Enter ID of node to be deleted:
48

Node 48 has been removed from the tree

Do you want to continue (press 1 for yes or 0 to exit): 1

1.Search the tree for a Node
2.Remove a node from the tree
3.print the tree (inorder)
4.Count of nodes in the tree

 Please enter your choice: 4

The number of nodes in tree are: 9

Do you want to continue (press 1 for yes or 0 to exit): 1

1.Search the tree for a Node
2.Remove a node from the tree
3.print the tree (inorder)
4.Count of nodes in the tree

 Please enter your choice: 3
46 -> 48 -> 49 -> 56 -> 65 -> 68 -> 71 -> 115 -> 130 ->

Do you want to continue (press 1 for yes or 0 to exit): 1

1.Search the tree for a Node
2.Remove a node from the tree
3.print the tree (inorder)
4.Count of nodes in the tree

 Please enter your choice: 1

Enter node ID:
4
the indx value is not present in the tree

Do you want to continue (press 1 for yes or 0 to exit): 1

1.Search the tree for a Node
2.Remove a node from the tree
3.print the tree (inorder)
4.Count of nodes in the tree

 Please enter your choice: 1

Enter node ID:
48

the indx value is present in the tree
Node (number of goals) is: 48
Name is: Zlatan Ibrahimovic
Goal Ratio is: 0.400000

Do you want to continue (press 1 for yes or 0 to exit): 0
```