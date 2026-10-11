#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include "ml_toolbox.h"

double sigmoid(double z){
    return (1/(1+pow(M_E,z)));
}

double relu(double z){
    if (z < 0){
        return 0;
    }
    return z;
}

void mat_activation(double (*activation)(double), mat_type *matrix){
    for (int i = 0; i < matrix->rows; i++){
        for (int j = 0; j < matrix->cols; j++){
            matrix->data[i][j] = activation(matrix->data[i][j]);
        }
    }
}