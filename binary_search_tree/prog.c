#include <stdio.h>
#include <stdlib.h>
#include "./source_code/bstree.h"

int main() {
  int indx;
  char * name;
  float ratio;
  tn * root = NULL, * temp_tree = NULL;
  //FILE * f = fopen("example_data.csv", "r");

  puts("\nreading the data from file and inserting it into tree");
  //fscanf(f, "%d,%[^,],%f", & indx, name, & ratio) == 3
  while (scanf("%d,%[^,],%f", & indx, name, & ratio) == 3) { // read string until a coma
    printf("%d,%s,%f\n", indx, name, ratio);
    insert( & root, indx, name, ratio);
  }

  puts("\nThe created tree is:");
  inorder(root);

  printf("\nThe number of nodes in tree are:%d\n", count(root));
  return 0;
}