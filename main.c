#include <stdio.h>
#include "lib/ml_toolbox.h"
#include "../c_linalg/lib/linalg.h"

int main() {
    mat_type *test = create_random_matrix(4,1, -10, 10);
    mat_type *test2 = copy_matrix(test);
    print_matrix(test);
    printf("\n");
    mat_activation(relu, test2);
    print_matrix(test);
    printf("\n");
    print_matrix(test2);
    printf("\n");
    print_mem_adresses(test);
    printf("\n");
    print_mem_adresses(test2);
    destroy_matrix(test);
    destroy_matrix(test2);
    return 0;
}