#ifndef MINHEAP_H 
#define MINHEAP_H

#include <stdint.h>
#include <stddef.h>

enum node_type {
    NODE_EMPTY = 0,
    NODE_INTERNAL = 1,
    NODE_LEAF = 2,
};

struct node {
    enum node_type type;
    uint64_t frequency;

    // the symbol field is zero for internal/empty nodes
    uint8_t symbol;

    struct node *left;
    struct node *right;
};

struct minheap {
    struct node* data[256];
    size_t size;
};

struct node* node_new(enum node_type type);
void node_destroy(struct node *t);

struct minheap* minheap_new();
struct node* minheap_pop(struct minheap *p);
void minheap_insert(struct minheap *p, struct node *t);
void minheap_destroy(struct minheap *p);
void minheap_print(struct minheap *p);

#endif
