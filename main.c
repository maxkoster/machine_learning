#include <stdio.h>
#include "lib/ml_toolbox.h"
#include "../c_linalg/lib/linalg.h"

int main() {
    layer_type *layer_1 = {->no_neurons = 2, .neurons = create_matrix(2,1), .activation_function = relu};
    return 0;
}