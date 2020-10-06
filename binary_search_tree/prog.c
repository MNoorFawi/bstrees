#include <stdio.h>
#include <stdlib.h>
#include "./source_code/bstree.h"

tn * read_data() {
  int indx;
  char player[100];
  float goal_ratio;
  tn * root = NULL;
  FILE * f = fopen("example_data.csv", "r");

  puts("\nreading the data from file and inserting it into tree:\n");
  //scanf("%d,%[^,],%f", & indx, name, & ratio) == 3; // here we will redirect stdin to the file
  while (fscanf(f, "%d,%[^,],%f", & indx, player, & goal_ratio) == 3) { // read string until a coma
    printf("%d,%s,%.2f\n", indx, player, goal_ratio);
    insert( & root, indx, player, goal_ratio);
  }
  fclose(f);

  puts("\nThe created tree is:");
  inorder(root);

  printf("\n\nThe number of nodes in tree are: %d\n", count(root));
  return root;
}

void main() {
  int n, choice, t;
  tn * root, * temp_tree = NULL;

  root = read_data();

  do {
    printf("\n1.Search the tree for a Node\n"
      "2.Remove a node from the tree\n"
      "3.print the tree (inorder)\n"
      "4.Count of nodes in the tree\n"
      "\n Please enter your choice: ");

    scanf("%d", & choice);
    switch (choice) {
    case 1:
      puts("\nEnter node ID:");
      scanf("%d", & t);
      temp_tree = search(root, t);
      if (temp_tree != NULL) {
        puts("\nthe indx value is present in the tree");
        printf("Node (number of goals) is: %d\nName is: %s\nGoal Ratio is: %4f\n", t, temp_tree -> name, temp_tree -> ratio);
      } else
        puts("the indx value is not present in the tree");
      break;

    case 2:
      puts("\nEnter ID of node to be deleted:");
      scanf("%d", & t);
      root = delete(root, t);
      printf("\nNode %d has been removed from the tree\n", t);
      break;

    case 3:
      inorder(root);
      puts("");
      break;

    case 4:
      printf("\nThe number of nodes in tree are: %d\n", count(root));
      break;

    default:
      puts("Invalid Input\n");
    }

    printf("\nDo you want to continue (press 1 for yes or 0 to exit): ");
    scanf("%d", & n);

  } while (n == 1);

}