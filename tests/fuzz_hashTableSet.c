#include "../hashtable.h"

int LLVMFuzzerTestOneInput(char *key, char *value) {
    HashTable *hashTable = initHashTable(1);
    hashTableSet(hashTable, key, value);
    return 0;
}