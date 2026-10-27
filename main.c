#include <stdio.h>
#include "lib/ml_toolbox.h"
#include "../c_linalg/lib/linalg.h"

int main() {
    printf("%li\n",sizeof(mat_type));
    printf("%li\n",sizeof(create_matrix(1,1)));

    printf("%li\n",sizeof(unsigned int));
    printf("%li\n",sizeof(unsigned int));
    printf("%li\n",sizeof(int));
    printf("%li\n",sizeof(double));
    return 0;
}