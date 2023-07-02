#ifndef HUFFMAN_H
#define HUFFMAN_H

#include "minheap.h" // minheap, node
#include <stdint.h>

// huffman tree
struct hftree {
    struct node *root;
    size_t size;

    struct minheap *minheap;
};

// huffman code
struct hfcode {
    uint8_t code;
    uint8_t bit_length;
};

struct hftree* hftree_new(uint64_t frequencies[256]);
void hftree_destroy(struct hftree *p);

void hftree_generate_dict(struct hftree *p, struct hfcode dict[256]);
void hftree_print(struct hftree *p);

#endif
