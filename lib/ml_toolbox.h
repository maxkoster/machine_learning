#pragma once
#include "../c_linalg/lib/linalg.h"

typedef struct layer_type_s{
    unsigned int neurons;
    double (*activation_function)(double);
} layer_type;

// Types
typedef struct network_type_s{
    unsigned int no_input_neurons;
    // no_layers is the amount of layers excluding the input layer
    unsigned int no_layers;
    layer_type **layers;
    mat_type **weights;
    mat_type **biases;
    double (*cost_function)(mat_type*);
} network_type;

//  Activation functions
double sigmoid(double z);
double relu(double z);

void mat_activation(double (*activation)(double), mat_type *matrix);
network_type* create_network(unsigned int no_input_neurons, unsigned int no_layers, layer_type **layers, double (*cost_function)(mat_type*));
void destroy_network(network_type *network);