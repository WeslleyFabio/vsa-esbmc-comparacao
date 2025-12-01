#include <assert.h>
#include <string.h>

struct Buffer {
    char data[9];
    int flag;
};

void fill_buffer(struct Buffer *b, const char *src) {
    size_t src_size = strlen(src);
    if (src_size > sizeof(b->data)) {
        src_size = sizeof(b->data); // clamp to max buffer size
    }
    memcpy(b->data, src, src_size);
}

int main(void) {
    struct Buffer b;
    b.flag = 1;
    fill_buffer(&b, "ABCDEFGH");
    assert(b.flag == 1 && (b.data[8] == '\0'));
    return 0;
}