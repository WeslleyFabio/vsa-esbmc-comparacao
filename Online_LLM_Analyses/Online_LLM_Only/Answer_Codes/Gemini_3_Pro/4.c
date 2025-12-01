#include <assert.h>
#include <stdlib.h>

int first_char_is_a(const char *s) {
    // Check if pointer is NULL before dereferencing
    if (s != NULL && s[0] == 'a') {
        return 1;
    }
    return 0;
}

int main(void) {
    char *p = NULL;
    int r = first_char_is_a(p);
    assert(r == 0);
    return 0;
}
