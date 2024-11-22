#include "../hashtable.h"

int LLVMFuzzerTestOneInput(const char *err) {
    memAllocError(err);
    return 0;
}