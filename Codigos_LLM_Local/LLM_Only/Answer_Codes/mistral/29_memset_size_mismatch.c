#include <assert.h>
#include <string.h>

struct Header {
    char tag[4];
    int size;
};

void reset_header(struct Header *h) {
    memset(h->tag, 0, sizeof(h->tag));
}

int main(void) {
    struct Header h = { "HEADER", 123 }; // Initialize tag and size at once
    reset_header(&h);
    assert(h.size == 123);
    return 0;
}
