#include <assert.h>
#include <string.h>

struct Buffer {
    char data[8];
    int flag;
};

void fill_buffer(struct Buffer *b, const char *src) {
    // Fix: Use sizeof(b->data) to ensure we do not write past the array bounds
    memcpy(b->data, src, sizeof(b->data));
}

int main(void) {
    struct Buffer b;
    b.flag = 1;
    fill_buffer(&b, "ABCDEFGH");
    assert(b.flag == 1);
    return 0;
}
