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

    /* Use the data before freeing it */
    int result = sum_array(data, 3);
    assert(result == 6);

    free(data);
    return 0;
}
