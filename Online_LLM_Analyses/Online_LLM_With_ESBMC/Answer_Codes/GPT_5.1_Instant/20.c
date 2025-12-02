#include <assert.h>
#include <string.h>

int check_password(const char *input) {
    const char *secret = "secret";
    /* Require exact match in length */
    if (strlen(input) != strlen(secret)) {
        return 0;
    }
    /* Compare the full string */
    if (strcmp(input, secret) == 0) {
        return 1;
    }
    return 0;
}

int main(void) {
    int r = check_password("secret");
    assert(r == 1);
    return 0;
}
