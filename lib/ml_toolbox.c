#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include "ml_toolbox.h"
#include "../../c_linalg/lib/linalg.h"

double sigmoid(double z){
    return (1/(1+pow(M_E,z)));
}