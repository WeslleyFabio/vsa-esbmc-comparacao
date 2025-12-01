#include <assert.h>
#include <stdlib.h>

int first_char_is_a(const char *s) {
    if (s != NULL && s[0] == 'a') {
        return 1;
    }
    return 0;
}

int main(void) {
    char *p = malloc(1); // Allocate some memory for the string.
    p[0] = '\0';          // Initialize the new memory with a null character.
    int r = first_char_is_a(p);
    assert(r == 0);
    free(p);              // Don't forget to free the allocated memory after use!
    return 0;
}
