//
// Created by yrohanizadegan on 18/07/17.
//

#include "N-p_PRNG.h"

/* This function computes the mean of a random sample which is input as an array.*/
double sample_mean(double *var, int n) {
    double sum=0.0;
    int i;
    for(i=0; i<n; i++) {
        sum += var[i]/n;
    }
    return sum;
}