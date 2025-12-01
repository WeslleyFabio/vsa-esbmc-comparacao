#include <assert.h>
#include <stdlib.h>

int sum_array(int *a, int n) {
    if (n <= 0) return -1; // add null check for empty arrays
    int s = 0;
    for (int i = 0; i < n; ++i) {
        s += a[i];
    }
    return s;
}

int main(void) {
    int *data = (int *)malloc(3 * sizeof(int));
    if (!data) {
        return 1;
    }
    data[0] = 1;
    data[1] = 2;
    data[2] = 3;
    free(data);
    data = NULL; // set pointer to NULL after freeing memory
    int result = sum_array(NULL, 3); // pass NULL to prevent dereference
    assert(result == -1); // check for invalid array size
    return 0;
}