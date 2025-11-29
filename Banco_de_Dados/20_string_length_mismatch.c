#include <assert.h>
#include <string.h>

int check_password(const char *input) {
    const char *secret = "secret";
    if (strlen(input) > strlen(secret)) {
        return 0;
    }
    if (strncmp(input, secret, strlen(input)) == 0) {
        return 1;
    }
    return 0;
}

int main(void) {
    int r = check_password("secret");
    assert(r == 1);
    return 0;
}
