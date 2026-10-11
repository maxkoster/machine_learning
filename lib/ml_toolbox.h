#pragma once
#include "../c_linalg/lib/linalg.h"

typedef struct layer_type_s{
    unsigned int neurons;
    double (*activation_function)(double);
} layer_type;

// Types
typedef struct network_type_s{
    unsigned int no_layers;
    layer_type *layer;
    mat_type *weights;
    mat_type *biases;
} network_type;



//  Activation functions
double sigmoid(double z);
double relu(double z);

void mat_activation(double (*activation)(double), mat_type *matrix);