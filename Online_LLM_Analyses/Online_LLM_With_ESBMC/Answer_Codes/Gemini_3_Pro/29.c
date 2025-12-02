#include <assert.h>
#include <string.h>

struct Header {
    char tag[4];
    int size;
};

void reset_header(struct Header *h) {
    // FIX: Explicitly use h->tag as the destination and its size
    memset(h->tag, 0, sizeof(h->tag));
}

int main(void) {
    struct Header h;
    h.size = 123;
    reset_header(&h);
    // The assertion will now pass because h.size is not overwritten
    assert(h.size == 123);
    return 0;
}