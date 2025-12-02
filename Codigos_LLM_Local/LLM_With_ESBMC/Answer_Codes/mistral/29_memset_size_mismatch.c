#include <assert.h>
#include <string.h>

struct Header {
    char tag[4];
    int size;
};

void reset_header(struct Header *h) {
    memset(h->tag, 0, sizeof(h->tag));
    h->size = 0; // Reset the size to a default value
}

int main(void) {
    struct Header h;
    h.size = 123;
    reset_header(&h);
    assert(h.size == 123);
    return 0;
}
