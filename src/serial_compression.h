#ifndef SERIAL_COMPRESSION_H
#define SERIAL_COMPRESSION_H

#include "huffman.h"

#include <stdio.h>

struct bitstream {
    uint8_t *buf;
    size_t capacity;    // buffer size in bytes

    uint64_t length;    // in bits
    uint64_t offset;    // current offset (in bits) into the stream
};

struct serial_compressor {
    struct hfcode *dict;

    uint8_t *in;
    size_t in_size;

    struct bitstream *ostream;
};

struct serial_compressor* serial_compressor_new(uint8_t *input, size_t len);
void serial_compressor_destroy(struct serial_compressor *p);
void serial_compressor_digest(struct serial_compressor *p);

#endif
