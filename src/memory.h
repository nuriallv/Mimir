#ifndef _MEMORY_H_
#define _MEMORY_H_

#include <stdio.h>
#include <stdlib.h>

void *mem_aligned_malloc(size_t, size_t);
void *mem_aligned_free(void *);

#endif
