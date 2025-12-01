#include <assert.h>

int is_index_valid(int index, int size) {
    // Corrected condition: index must be non-negative AND less than size
    if ((index >= 0) && (index < size)) {
        return 1;
    }
    return 0;
}

int main(void) {
    int r1 = is_index_valid(0, 10);
    int r2 = is_index_valid(9, 10);
    
    // Adjusted assertion: 0 is a valid index, so r1 should be 1
    assert(r1 == 1); 
    assert(r2 == 1);
    
    return 0;
}
