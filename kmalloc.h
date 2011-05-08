#ifndef _KMALLOC_H_
#define _KMALLOC_H_

#include <pspkerneltypes.h>
#include <stddef.h>

#define KMALLOC_HEAP_SIZE_KB(size_kb) \
	int kmalloc_heap_kb_size = (size_kb)

enum mode {MODE_GAME, MODE_XMB};

#ifdef __cplusplus
extern "C" {
#endif

int libc_init();
void libc_finish();
void *malloc(size_t size);
void *galloc(size_t size, int mode);
void free(void *ptr);

#ifdef __cplusplus
}
#endif

#endif // _PSPLIBC_H_