#include <assert.h>
#include <string.h>

int check_password(const char *input) {
    const char *secret = "secret";

    /* Reject if input length differs */
    if (strlen(input) != strlen(secret)) {
        return 0;
    }

    /* Accept only if full match */
    if (strncmp(input, secret, strlen(secret)) == 0) {
        return 1;
    }

    return 0;
}

int main(void) {
    int r = check_password("secret");
    assert(r == 1);
    return 0;
}
