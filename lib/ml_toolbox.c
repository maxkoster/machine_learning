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

network_type* create_network(unsigned int no_input_neurons, unsigned int no_layers, layer_type *layers[], double (*cost_function)(mat_type*)){
    
    network_type *network = calloc(1, sizeof(*network));

    network->no_input_neurons = no_input_neurons;
    network->no_layers = no_layers;
    network->layers = layers;
    network->cost_function = cost_function;

    network->weights = calloc(no_layers, sizeof(mat_type*));
    network->biases = calloc(no_layers, sizeof(mat_type*));

    for(int i = 0; i < no_layers; i++){
        if( i == 0 ){
            network->weights[i] = create_matrix(network->layers[i]->neurons, network->no_input_neurons);
        }
        else{
            network->weights[i] = create_matrix(network->layers[i]->neurons, network->layers[i-1]->neurons);
        }
        network->biases[i] = create_matrix(network->layers[i]->neurons,1);
    }

    return network;
}

void destroy_network(network_type *network){
    for (int i = 0; i < network->no_layers; i++){
        free(network->weights[i]);
        free(network->biases[i]);
    }
}