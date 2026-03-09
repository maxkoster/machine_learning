#include <stdio.h>
#include "lib/ml_toolbox.h"
#include "../c_linalg/lib/linalg.h"

int main() {
    printf("%f",sigmoid(0.0));
    mat_type *test = create_square_matrix(6);
    mat_sigmoid(test);
    print_matrix(test);
    print_mem_adresses(test);
    destroy_matrix(test);
    test_func();
    return 0;
}