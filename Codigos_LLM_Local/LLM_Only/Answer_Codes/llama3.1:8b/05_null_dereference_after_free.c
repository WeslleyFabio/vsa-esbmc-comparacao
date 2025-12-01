#include <assert.h>
#include <stdlib.h>

int sum_array(int *a, int n) {
    if (n <= 0 || !a) {
        return -1; // or any other error code
    }
    int s = 0;
    for (int i = 0; i < n && a[i] != 0; ++i) {
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
    data = NULL; // Set the pointer to NULL after freeing
    int result = sum_array(data, 3); // Should now return -1 (or error code)
    assert(result == -1); // or assert with expected value
    return 0;
}