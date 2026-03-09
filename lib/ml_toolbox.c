#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include "ml_toolbox.h"

double sigmoid(double z){
    return (1/(1+pow(M_E,z)));
}

void mat_sigmoid(mat_type *matrix){
    for (int i = 0; i < matrix->rows; i++){
        for (int j = 0; j < matrix->cols; j++){
            matrix->data[i][j] = sigmoid(matrix->data[i][j]);
        }
    }
}

void test_func(){
    printf("test\n");
}