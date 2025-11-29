#include <assert.h>
#include <stdlib.h>

int sum_array(int *a, int n) {
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

    /* Use the allocated memory before freeing it */
    int result = sum_array(data, 3);

    /* Now it is safe to free the memory */
    free(data);
    data = NULL; /* Optional: avoids accidental reuse */

    assert(result == 6);
    return 0;
}
