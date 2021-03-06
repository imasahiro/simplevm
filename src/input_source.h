//
//  input_source.h
//  pegVM
//
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>
#ifndef INPUT_SOURCE_H
#define INPUT_SOURCE_H

typedef struct InputSource {
  const char *source;
  size_t pos;
  size_t length;
  const char *filename;
} InputSource;

InputSource *InputSource_Init(InputSource *is, const char *filename);
void InputSource_Dispose(InputSource *is);

static inline uint8_t InputSource_GetUint8(InputSource *input)
{
    return (input->pos < input->length) ?
        ((uint8_t *)input->source)[input->pos++] : -1;
}

uint8_t *InputSource_CopyText(InputSource *input, size_t pos, size_t length);

static inline uint32_t InputSource_GetUint32(InputSource *input)
{
    uint32_t data;
    assert(input->pos < input->length);
    data = ((uint32_t *)input->source)[input->pos];
    input->pos += sizeof(uint32_t) / sizeof(uint8_t);
    return data;
}


#endif /* end of include guard */
