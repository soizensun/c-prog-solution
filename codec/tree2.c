#include<stdlib.h>
#include<stdio.h>

struct node  {
    char key[20];
    int size;
    struct node* parent;
    struct node* leftChild;
    struct node* rightSibling;
};


struct node* createRoot(char key[20], int size)
{
    // Allocate memory for new node
    struct node* node = (struct node*)malloc(sizeof(struct node));
    // Assign key to this node
    node->key[20] = key[20];
    // Initialize parent
    node->parent = NULL;
    // Initialize left child, and right sibling as NULL
    node->leftChild = NULL;
    node->rightSibling = NULL;
    node->size = size;
    return(node);
}

struct node* createNode(char key[20], int size, struct node* parent)
{
  // Allocate memory for new node
  struct node* node = (struct node*)malloc(sizeof(struct node));
  // Assign key to this node
  node->key[20] = key[20];
  // Initialize parent
  node->parent = parent;
  // Initialize left child, and right sibling as NULL
  node->leftChild = NULL;
  node->rightSibling = NULL;
  node->size = size;
  // Set this node as a child to its parent
  if(node->parent != NULL) {
        if(node->parent->leftChild != NULL) {
            struct node* child = node->parent->leftChild;
            while(child->rightSibling != NULL) {
                child = child->rightSibling;
            }
            child->rightSibling = node;
        }
        else {
            node->parent->leftChild = node;
        }
    }
 return(node);
}

int main(){

  struct node* userRtCourse = createRoot("/user/rt/course/", 1);
  struct node* cs016 = createNode("cs016/", 2, userRtCourse);
  struct node* cs252 = createNode("cs252/", 1, userRtCourse);
  struct node* grades1 = createNode("grades", 8, cs016);
  struct node* homeworks = createNode("homeworks/", 1, cs016);
  struct node* programs = createNode("programs/", 1, cs016);
  struct node* projects = createNode("projects/", 1, cs252);
  struct node* grades2 = createNode("grades/", 3, cs252);
  struct node* hw1 = createNode("hw1", 3, homeworks);
  struct node* hw2 = createNode("hw2", 2, homeworks);
  struct node* hw3 = createNode("hw3", 4, homeworks);
  struct node* pr1 = createNode("pr1", 57, programs);
  struct node* pr2 = createNode("pr2", 97, programs);
  struct node* pr3 = createNode("pr3", 74, programs);
  struct node* papers = createNode("papers/", 1, projects);
  struct node* demos = createNode("demos/", 1, projects);
  struct node* buylow = createNode("buylow", 26, papers);
  struct node* sellhigh = createNode("sellhigh", 55, papers);
  struct node* market = createNode("market", 4786, papers);

  printf("%d", getSizeRoot(userRtCourse));
  return 0;
}
