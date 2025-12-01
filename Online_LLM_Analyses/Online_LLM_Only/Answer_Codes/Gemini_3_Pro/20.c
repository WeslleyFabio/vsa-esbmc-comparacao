#include <assert.h>
#include <string.h>

int check_password(const char *input) {
    const char *secret = "secret";
    
    // Check for exact length to prevent prefix matching vulnerabilities
    if (strlen(input) != strlen(secret)) {
        return 0;
    }
    
    // Use strcmp for exact string comparison
    if (strcmp(input, secret) == 0) {
        return 1; // Return 1 to indicate success
    }
    
    return 0;
}

int main(void) {
    int r = check_password("secret");
    assert(r == 1);
    return 0;
}
