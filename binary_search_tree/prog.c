#include <stdio.h>
#include <stdlib.h>
#include "bstree.h"

int main() {
  puts("\nstarting with an empty tree");
  tn * root = NULL;
  Type type = INT;
  int i, count = 0;
  Tuple t;
  int arr[7] = {
    13,
    11,
    19,
    91,
    22,
    12,
    94
  };
  for (i = 0; i < 7; ++i) {
    insert( & root, arr[i], type, & count);
  }
  puts("\ntree now is not empty:");
  inorder(root, type);
  puts("");
  puts("try now to search for and delete some values: (0 means False while 1 is True)");
  printf("search for value 13 --> %d \n", !(search_tree(root, int_in(13), type) == NULL));
  printf("search for value 11 --> %d \n", !(search_tree(root, int_in(11), type) == NULL));
  printf("tree size --> %d\n", count);
  printf("remove value 13 -->\n");
  delete_node( & root, int_in(13), type, & count);
  printf("search again for value 13 --> %d \n", !(search_tree(root, int_in(13), type) == NULL));
  printf("try again to remove value 13 -->\n");
  delete_node( & root, int_in(13), type, & count);
  puts("\nprint the table after the deletion");
  inorder(root, INT);
  puts("insert value 4");
  insert( & root, 4, type, & count);
  inorder(root, type);
  puts("\nretrieve all elements into an array");
  char ** arrx = (char ** ) malloc(sizeof(char * ) * STRLEN);
  int len = 0;
  tree_to_array(root, type, arrx, & len);
  for (i = 0; i < len; ++i)
    printf("%s ", arrx[i]);
  puts("\n");
  printf("remove value 91 -->\n");
  delete_node( & root, int_in(91), type, & count);
  puts("\ntable is now looking like:");
  inorder(root, type);
}