#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

int sum_array(int *a, int n) {
    int s = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i]) { // check if the pointer is not null before dereferencing
            s += a[i];
        }
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
    free(data); // move this line before the assert statement
    int result = sum_array(data, 3);
    if (result != 6) {
        printf("The sum of array elements is not 6. Got %d\n", result);
    }
    assert(result == 6); // move this line after the free() to prevent undefined behavior
    return 0;
}
