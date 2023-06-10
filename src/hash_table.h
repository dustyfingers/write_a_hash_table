// represents an item in the hash table
typedef struct
{
    char *key;
    char *value;
} ht_item;

// represenets the hash table itself
typedef struct
{
    int size;
    int count;
    // an array of pointers to items
    ht_item **items;
} ht_hash_table;
