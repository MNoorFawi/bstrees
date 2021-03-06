#define STACK_SIZE 1000000
#define STRLEN 100

// enum to switch between types
typedef enum {
  INT,
  FLOAT,
  STR
}
Type;

// union to store only one element per hash table
typedef union {
  int _int;
  float _float;
  char _str[STRLEN];
}
Values;

struct tree_node {
  Values value;
  struct tree_node * left, * right;
};

typedef struct tree_node tn;

// a struct to handle multiple input and output
typedef struct {
  Type type;
  Values val;
}
Tuple;

void error(void);
int compare(tn * x, tn * y, Type type);
int compare2(tn * x, Tuple y, Type type, char op);
void insert_node(tn ** root, tn * _new, Type type);
void inorder(tn * root, Type type);
void tree_to_array(tn * root, Type type, char ** arr, int * len);
tn * search_tree(tn * root, Tuple value, Type type);
tn * get_ptr(tn * root, Tuple key, tn ** root_ptr, Type type);
void delete_node(tn ** root, Tuple key, Type type, int * filled);
Tuple int_in(int value);
Tuple float_in(float value);
Tuple str_in(char * value);
void insert(tn ** root, int value, Type type, int * count);