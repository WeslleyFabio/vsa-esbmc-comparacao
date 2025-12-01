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

    int result = sum_array(data, 3);
    free(data);

    assert(result == 6);
    return 0;
}
