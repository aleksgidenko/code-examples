#include <stdio.h>
#include <stdlib.h>

struct node {
  char c;
  struct node *next;
};

struct node *head = NULL;
struct node *cur = NULL;

struct node* find(char *c) {
  cur = head;
  do {
    if (cur->c == *c) {
      return cur;
    }
    cur = cur->next;
  } while (cur != NULL);
  return NULL;
}

void add(char *c) {
  struct node *n = (struct node*) malloc(sizeof(struct node));
  n->c = *c;
  n->next = NULL;

  if (head == NULL) {
    head = n;
  } else {
    cur = head;
    while (cur->next != NULL) {
      cur = cur->next;
    }
    cur->next = n;
  }
}

void delete_node(struct node *n) {
  if (head == n) {
    head = head->next;
  } else {
    cur = head;
    struct node *prev = NULL;
    while (cur != n) {
      prev = cur;
      cur = cur->next;
    };
    prev->next = cur->next;
  }
}

void delete(char *c) {
  cur = head;
  do {
    if (cur->c == *c) {
      delete_node(cur);
    }
    cur = cur->next;
  } while (cur != NULL);
}

void print() {
  cur = head;
  while (cur != NULL) {
    printf("%c\n", cur->c);
    cur = cur->next;
  }
}

int main(void) {
  add("a");
  add("b");
  add("c");
  add("b");

  print();
  puts("---");

  delete("b");
  print();

  puts("---");

  struct node* n = find("c");
  printf("%c\n", n->c);

  return 0;
}
