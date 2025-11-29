#include <assert.h>
#include <stdlib.h>

int sum_array(int *a, int n) {
    if (a == NULL) { // Add a check to ensure 'a' is not null before accessing it.
        return 0;
    }
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
    int result = sum_array(data, 3); // Pass a null pointer to 'sum_array' to trigger the violation.
    assert(result == 6);
    return 0;
}
