//
// Created by yrohanizadegan on 18/07/17.
//

#ifndef N_POINT_PRNG_N_P_PRNG_H
#define N_POINT_PRNG_N_P_PRNG_H

double PRNG_uniform();
double sample_mean(double *var, int n);
double *n_point_generator(double *points, double *probs, int size, int totnumpns);

#endif //N_POINT_PRNG_N_P_PRNG_H
