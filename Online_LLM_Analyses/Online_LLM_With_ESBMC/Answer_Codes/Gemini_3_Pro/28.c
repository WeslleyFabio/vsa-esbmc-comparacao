#include <assert.h>
#include <string.h>

struct Buffer {
    char data[8];
    int flag;
};

void fill_buffer(struct Buffer *b, const char *src) {
    // FIX: Use the size of the destination member (b->data), 
    // not the size of the entire struct (*b).
    memcpy(b->data, src, sizeof(b->data));
}

int main(void) {
    struct Buffer b;
    b.flag = 1;
    // Note: "ABCDEFGH" is 8 chars. memcpy will copy exactly 8 bytes.
    // data will not be null-terminated, but bounds are respected.
    fill_buffer(&b, "ABCDEFGH");
    assert(b.flag == 1);
    return 0;
}