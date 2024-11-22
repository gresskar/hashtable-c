#include "../hashtable.h"

int LLVMFuzzerTestOneInput(char *key, size_t size) {
    hash(key, size);
    return 0;
}